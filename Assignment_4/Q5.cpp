/*
Using reinterpret cast for Memory Address Conversion Create an unrelated class and cast its pointer to an int* using reinterpret cast.
 Print the memory addresses before and after casting. 
 Discuss the risks of reinterpret cast.

 Risks: 
 - reinterpret_cast forecfully reinterprets the memory bits as the target toe without any conversion
 - the second address is treated as its pointing to int
 - /*intPtr treats first few data bytesof the object as int --> may not correspond to any data that would be present/makes sense
*/

#include <iostream>

class A {
    private:
    int num;

    public:
    A() : num(42){}
    int getNum() const { 
        return num; 
        }
};

int main(){
    A obj;
    A* objPtr = &obj;
    
    //og pointer address
    std::cout << "original pointer addres:  " << objPtr << "\n";
    
    //cast to int* using reinterpret_cast
    int* intPtr = reinterpret_cast<int*>(objPtr);
    
    std::cout << "casted pointer address: " << intPtr << "\n";
    
    //access memory 
    
    std::cout << "val at address: " << *intPtr << "\n";  //res-- undefined behavior

}
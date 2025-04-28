/*
Implicit and Explicit Casting between Unrelated Classes 

Create two unrelated classes and attempt implicit and explicit casting between them using static cast, 
reinterpret cast, and dynamic cast. 

Discuss the results of each cast.

EXPLANATION: 
- implicit casting is not allowed between unrlated classes
- static cast compiles but doesn't check if the conversion is valid, therefore could be unsafe
- reinterpret cast forecfully reinterperts the memory as the target type
- dynamic cast fails and return nullptrfor unrelated classes if atleast one of the classes has a vritual function
*/

#include <iostream>

class A{
    public:
    virtual void show() { 
        std::cout << "A::show()" <<"\n"; 
        }

    virtual ~A() {} 
};

class B{
    public:
    virtual void show() { 
        std::cout << "B::show()" <<"\n";
         }
         
    virtual ~B() {} 
};

int main(){
    A a;
    B b;

    //implicit casting between unrelated classes
    //B* bPtr = &a ------------- error: cannot convert 'A*' to 'B*'

    //explicit casting using static cast
    //B* bPtr = static_cast<B*>(&a);  -------------------- unsafe, but compiles

    //explicit casting using reinterpret cast
    B* bPtr1 = reinterpret_cast<B*>(&a); //compiles
    // bPtr1->display();  ------------- UNDEFINED behavior

    //explciit casting using dynamic cast
    A* aPtr = &a;
    B* bPtr2 = dynamic_cast<B*>(aPtr);
    if(bPtr2) {
        std::cout << "dynamic cast successful" << "\n";
    } else {
        std::cout << "dynamic cast failed" << "\n";  //gets printed
    }
}
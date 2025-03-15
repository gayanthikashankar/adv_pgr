#include <iostream>
/*
overriding: derived class has function w same as base class (can provide new implementaion)
usually we epect ti call base f1, but calls derived f1 (local method)

overloading: multiple fns w the same name but different params
*/

class base{
public:
    void f1(){
        std::cout<< "f1 from class base" << "\n";
    }
};
class derived : public base{
public:
    using base :: f1; //KEY FOR OVERLOADING: asking compiler to gve access to f1 of the base class with the same name
    
    void f1(){
        std::cout<< "f1 from class derived" << "\n";
    }
    
    //overloading
    void f1(int a){
        std::cout<< "val of a is: " << a <<"\n";
    }
};
int main(){
    base b;
    derived d;
    b.f1();
    d.f1();
    d.f1(8); //not overiding any other the previous functions

}
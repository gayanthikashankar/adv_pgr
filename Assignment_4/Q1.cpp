/*
Implicit and Explicit Casting between Related Classes 
Write a program that demonstrates implicit upcasting from a derived class to a base class and explicit downcasting using dynamic cast.
 Explain why implicit downcasting is not allowed.

 Ans: Not all base objects are erived objecys. therefore the compiler can't assume that the base pointer
    points to a derived object and an explicit cast is required t ensure that the cast is valid
*/

#include <iostream>
class A {
    public:
    void display(){
        std::cout<< "base class A" << "\n";
    }
};

class B: public A{
    public:
    void display(){
        std::cout<< "derived class B" << "\n";
    }

    void derivedSpec(){
            std::cout<< "derived specific method" << "\n";
    }
};

int main(){
    A a;
    //implicit upcasting -- derived to base
    A* basePtr = &a;
    basePtr->display();

    //explicit downscating -- base to derived
    B* derivedPtr = static_cast <B*>(basePtr);
    derivedPtr->derivedSpec();


}
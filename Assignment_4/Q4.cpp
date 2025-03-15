/*
Using static cast with Class Hierarchy Define a base class and a derived class. 
Create a base class pointer pointing to a derived class object. 
Use static cast to convert the pointer back to the derived class and access a derived class-specific method.
*/

#include <iostream>

class base {
    public:

    void baseMethod(){
        std::cout << "base::baseMethod()" << "\n";

    }

    virtual ~base() {}
};

class derived : public base {
public:
    void derivedMethod() {
        std::cout << "derived::derivedMethod()" << "\n";
    }
};

int main(){
    derived d;
    base* basePtr = &d;  //implicit upcasting
    
    //downcast using static_cast
    derived* derivedPtr = static_cast<derived*>(basePtr);
    
    //access derived-specific method
    derivedPtr->derivedMethod();


}
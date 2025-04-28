/*
Static vs. Dynamic Binding with Virtual and Non-Virtual Functions
 Write a base class with a virtual function and a non-virtual function. 
 Then, derive a subclass that overrides the virtual function. 
 Demonstrate how static binding happens when calling non-virtual functions 
 and dynamic binding happens when calling virtual functions using base class pointers
*/

#include <iostream>

class base{
    public:

    virtual void virtFn(){
        std::cout << "base::virtFn()" << "\n";
    }

    virtual void nonvirtFn(){
        std::cout << "base::nonvirtFun()" << "\n";
    }

    virtual ~base() {}
};

class derived : public base {
public:
    void virtFn() override {
        std::cout << "derived::vvirtFn()" << "\n";
    }
    
    void nonvirtFn() {
        std::cout << "derived::nonvirtFn()" << "\n";
    }
};

int main(){
    derived d;
    base* basePtr = &d;
    
    //dynamic bidning w virtual function
    basePtr->virtFn();    //o/p: Derived::virtualFunc()
    
    //static binding with nonvirt function
    basePtr->nonvirtFn();

}
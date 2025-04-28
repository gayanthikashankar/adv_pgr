/*
Demonstrating using in Class Inheritance 
Define a base class with a protected function. 
Inherit from this class and use using to change the function’s access level to public. 
Call this function using an object of the derived class and explain how using modifies accessibility.
*/

#include <iostream>

class base {
protected:
    void protectedFn() {
        std::cout << "base::protectedFn()" << "\n";
    }
};

class drvd : public base {
public:
    //protectd to public
    using base::protectedFn;
};

int main() {
    drvd d;
    
    //call protcetd fn through derived object
    d.protectedFn();
    
    
    //base b; --------gives eeror
    //b.protectedFunction();  //Error: protected member
    
    return 0;
}
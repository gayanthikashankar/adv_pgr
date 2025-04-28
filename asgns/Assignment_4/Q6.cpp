/*
dynamic cast with Polymorphic Classes 
Create a base class with at least one virtual function. 
Then, create multiple derived classes.
 Use dynamic cast to safely cast a base class pointer to a derived class pointer. 
 Show what happens when dynamic cast fails.
*/

#include <iostream>

class base {
public:
    virtual void show() { 
        std::cout << "base::show()" << "\n";
         }

    virtual ~base() {}
};

class derived1 : public base {
public:
    void show() override { 
        std::cout << "derived1::show()" << "\n"; 
        }

    void derived1Specific() {
         std::cout << "derived1 specific method" << "\n"; 
         }
};

class derived2 : public base {
public:
    void show() override {
         std::cout << "derived2::show()" << "\n"; 
         }

    void derived2Specific() { 
        std::cout << "derived2 specific method" << "\n"; 
        }
};

int main(){
    base* basePtr1 = new derived1();
    base* basePtr2 = new derived2();
    base* basePtr3 = new base();
    
    //cast to derived1
    derived1* derived1Ptr = dynamic_cast<derived1*>(basePtr1);
    if(derived1Ptr) {
        std::cout << "successfully cast to derived1" << "\n";
        derived1Ptr->derived1Specific();
    } else {
        std::cout << "failed to cast to derived1" << "\n";
    }
    
    //cast basePtr2 (which points to derived2) to derived1
    derived1* failedCast = dynamic_cast<derived1*>(basePtr2);
    if(failedCast) {
        std::cout << "successfully cast to derived1" << "\n";
        failedCast->derived1Specific();
    } else {
        std::cout << "failed to cast to derived1" << "\n";  //prints
    }
    
    delete basePtr1;
    delete basePtr2;
    delete basePtr3;

}
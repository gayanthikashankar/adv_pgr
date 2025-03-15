/*
QUESTION 1 

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
*/

/*
QUESTION 2

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
*/

/*
QUESTION 3 

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
*/

/*
QUESTION 4

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
*/

/*
QUESTION 5

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
*/

/*
QUESTION 6

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
*/

/*
QUESTION 7

#include<iostream>

class constClass {
private:
    const int constMember;
public:
    constClass(int val) : constMember(val) {}
    
    int getConstMember() const {
        return constMember;
    }
    
    void unsafeModify() {
        //const_cast to remove const qualifier
        int& nonConstRef = const_cast<int&>(constMember);
        nonConstRef = 100;  //modifying a const member 
        
        std::cout << "modified value: " << constMember << "'n";
    }
};

int main(){
    constClass obj(42);
    std::cout << "og value: " << obj.getConstMember() << "\n";
    
    obj.unsafeModify();
    std::cout << "after modification: " << obj.getConstMember() << "\n";

}
*/

/*
QUESTION 8

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
*/

/*
QUESTION 9

#include <iostream>


class base {
public:
    void show(int x) {
        std::cout << "base::show(int): " << x << "\n";
    }
    
    void show(double x) {
        std::cout << "base::show(double): " << x << "\n";
    }
};

class drvd : public base {
public:
    //derived scope
    using base::show;
    
    void show(std::string s) {
        std::cout << "derived::show(std::string): " << s << "\n";
    }
};

int main() {
    base b;
    b.show(10);      //base::show(int)
    b.show(10.5);    //base::show(double)
    
    drvd d;
    d.show(20);      
    d.show(20.5);    
    d.show("hello"); //derived::show(std::string)
    
    return 0;
}
*/
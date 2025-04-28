/*
Function Overloading and using in Derived Classes 
Create a base classwithanoverloadedfunction(void show(int)andvoid show(double)).
 Inherit from this class and define void show(std::string).
  Use using Base::show; in the derived class and demonstrate function resolution in both base and derived class objects.
*/

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
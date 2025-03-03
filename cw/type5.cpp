#include <iostream>
/*
upcasting and downcasting 

upcasting
- obj of class base and obj of class derived, both are related
- asking obj of base to poin to obj of derived, will you be losing any data?

ans: aon't lose data, instead creates copies

downcasting: if we do it in revrese way: have a pointer ponting to derived and want o point to base class, in thatcase we lose th data
*/
class base {
    public:
    int a = 4;

};

class derived : public base {
    public:
    int b = 5;
    int c = 6;
};

int main(){
    base ob;
    base* obptr = &ob;
    std::cout << obptr->a << "\n";

    derived od;
    derived* odptr = &od;
    std::cout << odptr->b << " " << odptr->c << "\n";

    /////////
    std::cout<<"upcasting+donwcasting" << "\n";

    base ob2;  //renamed to avoid redefinition
    base* obptr2 = &ob2;  //renamed to avoid redefinition
    std::cout << obptr2->a << "\n";
    
    derived od2;  //renamed to avoid redefinition
    derived* odptr2 = &od2;  //renamed to avoid redefinition
    
    obptr2 = odptr2; //upcasting, implicit
    std::cout << obptr2->a << "\n";
    
    odptr = (derived*)obptr; //DOWNCASTING, NOT IMPLICIT ==> derived class ptr pointing to base class ptr, supposed to print garbage val
    std::cout << odptr->a << " " << odptr->b << " " << odptr->c << "\n";
}
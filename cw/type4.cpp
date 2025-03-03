#include <iostream>
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
    
}
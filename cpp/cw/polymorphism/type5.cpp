#include <iostream>
/*
upcasting and downcasting
upcasting
- obj of class base and obj of class derived, both are related
- asking obj of base to poin to obj of derived, will you lose any data?
ans: don't lose data, instead creates copies
downcasting: if we do it in reverse way: have a pointer pointing to derived and want to point to base class, in that case we lose the data
binding: obptr was expected to address of base class object but this was during compile time, but during runtime we change its binding and ask it
bind to the derived class object
static: compiler time, obptr was pointing to address of base class, but during runtime it change binding to derived class
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
 base* obptr = &ob;         //Static binding: type of pointer known at compile time
std::cout << obptr->a << "\n";
 derived od;
 derived* odptr = &od;      //Static binding
std::cout << odptr->b << " " << odptr->c << "\n";
 /////////
std::cout<<"upcasting+donwcasting" << "\n";
 base ob2; 
 base* obptr2 = &ob2; 
std::cout << obptr2->a << "\n";
 derived od2; 
 derived* odptr2 = &od2; 
 obptr2 = odptr2;           //upcasting, IMPLICIT (Static binding: base ptr points to derived obj)
 // The binding is static because without virtual functions, The compiler determines which member to access based on pointer type
std::cout << obptr2->a << "\n";
 odptr = (derived*)obptr;   //downcasting EXPLICIT (Static binding: derived ptr to base obj - UNSAFE)
 //this is still static binding, as the cast forces the compiler to treat the pointer as derived type at compile time
std::cout << odptr->a << " " << odptr->b << " " << odptr->c << "\n";  
}
#include <iostream>
/*
if we have typecasting that are unrelated class it will not work
- check why this code works
*/
class A{
public:
    int a;
};
class B{
public:
    int b;
};
int main(){
    A* oa = new A(); //object of class a
    B* ob = new B();
    //oa = ob; ======= pointers dont support implicit typecasting
    oa = (A*)ob; //cast ob into oa
    oa->a = 4;
    std::cout << "val of a is: "<< oa->a << "\n";
    
    delete oa;
    delete ob;
    
    return 0;
}
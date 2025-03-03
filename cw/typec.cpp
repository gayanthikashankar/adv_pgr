#include <iostream>
/*
typecasting
*/
int main(){
    int a = 5;
    double b = 6.6;
    double c= 5.5;
    b = a;//int to douuble, implicit casting
    //exliciti typcasting:
    b = (double)a;
    std::cout<< "value of b: " << b << "\n";
    a = c; //double to int, implicit casting
    //exliciti typcasting:
    a = (int)c;
    std::cout<< "value of a: " << a << "\n";
    // should get a warning since we're converting double to int as we lose data in the conversion


}
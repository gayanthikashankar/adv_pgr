#include <iostream>
/*
typecasting
*/
int main(){
    int a = 5;
    double b = 6.6;
    double c= 5.5;
    b = a;//int to douuble, implicit casting (automatic conversion), no data lost b= 5.0
    //exliciti typcasting:
    b = (double)a; //epxiclirty sayiing a to convert to a double even though its not needed her
    std::cout<< "value of b: " << b << "\n";
    a = c; //double to int, implicit casting, a= 5, the 0.5 dicared so data lost
    //exliciti typcasting:
    a = (int)c;
    std::cout<< "value of a: " << a << "\n";
    // should get a warning since we're converting double to int as we lose data in the conversion

}
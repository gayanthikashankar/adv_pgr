/*
pointer => a variable that stores the mem address of another variable 

& => address of the operator

* => derefrence the operator

*/ 

#include<iostream>


int main(){

    //define
    std::string name = "Bob";
    int age = 18;
    std::string Fruits[3] = {"Apple", "Banana", "Grape"};
    
    //pointer
    std::string *pName = &name;
    int *pAge = &age;
    std::string *pFruits = Fruits; //array already stores address

    //prints the actual data
    std::cout << *pName << "\n";
    std::cout << *pAge << "\n";
    std::cout << *pFruits << "\n";

    //prints the address of the data
    std::cout << pName << "\n";
    std::cout << pAge << "\n";
    std::cout << pFruits << "\n";
}
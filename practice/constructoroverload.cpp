/*
multiple constructors with the same name but different parameters
varying arguments when insantiating an object
*/
#include <iostream>

class pizza{
    public:
    std::string topping1;
    std::string topping2;

    //constructor 1: no topping:
    pizza(){}

    //constructor 2: 1 topping:
    pizza(std::string topping1){
        this-> topping1 = topping1;
    }

    //constructor 3: 2 toppings:
    pizza(std::string topping1, std::string topping2){
        this-> topping1 = topping1;
        this-> topping2 = topping2;
    }

};

int main(){
    pizza p1;
    pizza p2("pepperoni");
    pizza p3("mushrooms", "olives");

    std::cout<< p1.topping1 << "\n";

    std::cout<< p2.topping1 << "\n";

    std::cout<< p3.topping1 << "\n";
    std::cout<< p3.topping2 << "\n";

}
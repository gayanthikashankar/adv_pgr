#include <iostream>

/*
a class can recieve attributes and methods from another class
children classes inherit from parent class
reuse similair code within multiple classes
*/

//parent class

class animal{
    public:
    bool alive = true;

    void eat(){
        std::cout<< "This animal is eating"<< "\n";
    }
};

//children class

class dog : public animal{
    //automatically inherits everything defined and declared in the parent class
    public:

    void bark(){

        std::cout<< "The dog is barking" << "\n";

    }
};

class cat : public animal{
    public:

    void meow(){
        std::cout<< "The cat goes meow" << "\n";
    }
};

int main(){
    dog d1;
    std::cout<<d1.alive<< "\n";
    d1.eat();
    d1.bark();

    cat c1;
    c1.meow();
}
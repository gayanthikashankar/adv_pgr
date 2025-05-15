#include <iostream>
#include <string>       
using namespace std;

/*
single inheritance: A derived class inherits from only one base class.
"is-a" relationship
*/


class Animal {
public:
    void eat() {
        cout << "Animal is eating" << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking" << endl;
    }
};

int main() {
    Dog dog;
    dog.eat();  //inherited from Animal class
    dog.bark(); //dog's own method
    
    return 0;
}
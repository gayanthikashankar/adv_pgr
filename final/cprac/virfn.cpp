#include <iostream>
using namespace std;

/*
- virtual fn gives the ability of runtime polymorphism
- virtual fn is a fn that can be overridden in a derived class
- the most derived class will be called if it exists, otw base class fn will be called
- virtual fn is declared in the base class
*/


class Instrument {
    public:

    /*
    pure vortual function and 
    instrument becomes an abstract class (a class that has taleast one virtual function)

    virtual void makeSound() = 0;
    
    */
    virtual void makeSound() {
        cout << "Instrument is playing..." << endl;
    }
};

class Guitar : public Instrument {
    public:
    void makeSound() {
        cout << "Guitar is playing..." << endl;
    }
};


int main() {
    Instrument* i1 = new Guitar(); // pointer to base class
    i1->makeSound(); //access members of base class


}
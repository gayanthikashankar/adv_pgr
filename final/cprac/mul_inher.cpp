#include <iostream>
#include <string>       
using namespace std;

/*
mul inheritance: A derived class inherits from two or more base classes.
"has-a" relationships with multiple capabilities

*/

class Animal {
public:
    void eat() {
        cout << "Animal is eating" << endl;
    }
};

//seecond base class
class Machine {
public:
    void start() {
        cout << "Machine is starting" << endl;
    }
};

//derived class inheriting from both Animal and Machine
class Robot : public Animal, public Machine {
public:
    void work() {
        cout << "Robot is working" << endl;
    }
};

int main() {
    Robot robot;
    robot.eat();   //inherited from Animal class
    robot.start(); //inherited from Machine class
    robot.work();  //robot's own method
    
    return 0;
}



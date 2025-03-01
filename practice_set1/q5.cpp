/*
Create a class Counter that has a static variable to keep track of the number of objects created. 
Display the count each time an object is instantiated.
*/

#include <iostream>

class Counter{
    private:
    static int count;

    public:
    //constructor
    Counter(){
        count++;
        std::cout<< "object created, curr count: " << count << "\n";
    }

    //static method to get curr count:
    static int getcount(){
        return count;
    }
};

//init static var:
int Counter::count = 0;

int main(){
    Counter c1;
    Counter c2;

    std::cout<< "Number of objects created: " << Counter::getcount() << "\n";

}
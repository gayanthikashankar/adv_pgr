/*
Define a class Circle with a private member radius. 
Include constructor overloading to initialize the radius with default and parameterized values. 
Add a method to compute the area.
*/

#include <iostream>

class Circle{
    private:
    int radius;

    public:

    //default constructor
    Circle(){
        this-> radius = 0;
    }

    //parameterized constructor
    Circle(int radius){
        this-> radius = radius;
        
    }

    double computeArea(){
        return 3.1415 * radius * radius;
    }
};

int main(){
    Circle c1(2);
    std::cout << "Area: " << c1.computeArea() << "\n";

    Circle c2; 
    std::cout << "Area of default circle: " << c2.computeArea() << "\n";


}
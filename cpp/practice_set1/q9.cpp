/*
Write a class Rectangle with a constructor that initializes its length and breadth. 
Use constructor overloading to initialize it with equal sides (square).

*/

#include <iostream>

class Rectangle{
    public:
    int length;
    int breadth;

    //constryctor
    Rectangle(int length, int breadth){
        this-> length = length;
        this-> breadth = breadth;
    }

    //constructor overloading
     Rectangle(int side){
        this->length = side;
        this->breadth = side;
    }
};

int main(){

    Rectangle rect(10, 5);
    std::cout << "Rectangle: " << rect.length << " x " << rect.breadth << std::endl;
    
    Rectangle square(7);
    std::cout << "Square: " << square.length << " x " << square.breadth << std::endl;
    

}
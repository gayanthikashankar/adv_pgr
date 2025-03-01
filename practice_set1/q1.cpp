/*
Create a class Vehicle with private attributes speed and fuel. 
Implement a constructor to initialize them and a destructor that prints a message when an object is destroyed.
*/

#include <iostream>

class vehicle{
    private:
    double speed;
    std::string fuel;

    public:
    //constructor
    vehicle(double speed, std::string fuel){
        std::cout<< "constructor loading" << "\n";
        this->speed = speed;
        this-> fuel = fuel;
        std::cout<<"speed: " << speed << "\n";
        std::cout<<"fuel: " << fuel << "\n";
        
    }

    //destructor
    ~vehicle(){
        std::cout<< "destructor loading" << "\n";
        std::cout<<"speed: " << speed << "\n";
        std::cout<<"fuel: " << fuel << "\n";
    }

};

int main(){
    vehicle v1(98, "petrol");
}
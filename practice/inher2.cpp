#include <iostream>

class shape{
    public:
    double area;
    double volume;

};

class cube : public shape{
    public:
    double side;

    //constructor
    cube(double side){
        this->side = side;
        this-> area = side * side * 6; 
        this-> volume = side * side * side; 
    }
};

class sphere : public shape{
    public:
    double radius;

    //constructor
    sphere(double radius){
        this-> radius = radius;
        this->area = 4 * 3.145 * radius * radius;
        this->volume = (4/3.0) * 3.1415 * radius * radius * radius;

    }
};

int main(){
    cube c1(10);
    std::cout<< "cube area: " << c1.area << "\n";
    std::cout<< "cube volume: " << c1.volume << "\n";

    sphere s1(10);
    std::cout<< "sphere area: " << s1.area << "\n";
    std::cout<< "sphere volume: " << s1.volume << "\n";

}
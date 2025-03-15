/*
constructor: a special method within a class that's automatically called when an object is instantiated

- useful for assigning values to attributes as arguments
*/

#include <iostream>

class Student{
    public:
    std::string name;
    int age;
    double gpa;

    //constructor
    Student(std::string name, int age, double gpa){
        this-> name = name;
        this-> age = age;
        this-> gpa = gpa;

    }
    /* ALT:

    Student(std::string x, int y, double z){
        name = x;
        age = y;
        gpa = z;

    }
    */

};

int main(){

    //instead of using dot operator to set each attribute individually:
    Student s1("Harley", 18, 3.7);

    //print
    std::cout <<s1.name << "\n";
    std::cout <<s1.age << "\n";
    std::cout <<s1.gpa << "\n";


}
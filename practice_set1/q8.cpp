/*
Define a class Employee with an employee ID and salary as private members
 Include a constructor and a destructor to initialize and clean up resources.
*/

#include <iostream>

class Employee{
    private:
    int id;
    double sal;

    public:
    std::string name;

    Employee(std::string name, int id, double sal){
        this->name = name;
        this->id = id;
        this->sal = sal;

        std::cout<< "constructor executing: "<< "\n";
    }

    ~Employee(){
        std::cout<< "destructor executing: "<< "\n";
    }
};

int main(){
    Employee e1("Hanna", 288, 8000);
}
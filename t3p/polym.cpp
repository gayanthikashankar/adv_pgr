
/*
pOLYMORHPISHM
objects can be identfied by more than one type
dog: canine, animal, organism (more than one data type)
vritual keyword

- we dont redefine name inside derived class(inheritance)
- reduces code duplication
- we can use print member fn with student obj.mdestu obj

static polymorphism/binding
- default behavior: memebr fn of base class called, not the overriden print emmebr fn so specialities not printed
- therefore we use dynamic polymorphism/binding


dynamic polymorphism/binding
- use virtual keyword
- makes calls dynamic: whihc memebr fn to call is made at runtime instead of compile time
*/

#include <iostream>

class Student{
    public:
    std::string name;
    
    //constructor
    Student(std::string name){
        this->name = name;
    }

    //function 1
    virtual void print(){
        std::cout<< name<< std::endl;
    }

};

//derived class
class MedicalStu: public Student{
    public:
    std::string speciality;

    MedicalStu(std::string name, std::string speciality) : Student(name) {
    this->speciality = speciality;
    }

    //overriding fn1
    void print(){
        std::cout<< name<< ": " << speciality <<std::endl;
    }
};

int main(){
    //maintain table of base class studnet and derived class medicalstu----use 2 sep arrays

    //arr that pointers to student obects
    Student *students[]={
        new Student("Ally"),
        new Student("Ben"),
        new Student("Carla"),
        new MedicalStu("Dan", "Radiology"),
        new MedicalStu("Earl", "Family med"),
        new MedicalStu("Faye", "Dentistry")
    };

    //write a loop to print out each student
    for(int i=0;i<6;i++){
        students[i]-> print();
    };

    //FREE SPACE

    for(int i=0;i<6;i++){
        delete students[i];
    };

    /*
    CODE DUPE:

    //repeat for medical student class
    MedicalStu *med_students[]={
        new MedicalStu("Dan", "Radiology"),
        new MedicalStu("Earl", "Family med"),
        new MedicalStu("Faye", "Dentistry")
    };

    //write a loop to print out each student
    for(int i=0;i<3;i++){
        med_students[i]-> print();
    };

    for(int i=0;i<3;i++){
        delete med_students[i];
    };
    */
    


}

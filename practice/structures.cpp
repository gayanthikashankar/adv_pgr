/*
Groups related variables under one name
Member = variables in struct
Class member access operators = members can be accessed with '.'
*/

#include <iostream>

struct Student{

    std::string name;
    double gpa;
    bool enrolled;

};

int main(){

    Student s1;
    s1.name = "Georgia";
    s1.gpa= 8.9;
    s1.enrolled = true;

    std::cout<<s1.name<<"\n";
    std::cout<<s1.gpa<<"\n";
    std::cout<<s1.enrolled<<"\n";


}
/*
Write a class Student with private members name and marks.
 Use a friend function to compare marks of two students and return the student with higher marks.
*/

#include <iostream>

class Student{
    private:
    std::string name;
    int marks;

    public:

    void setStudent(std::string name, int marks){
        this-> name = name;
        this-> marks = marks;
    }

     void getStudent(){
        std::cout<< "name: " << name << "\n";
        std::cout<< "marks: " << marks << "\n";
    }

    friend Student compare(Student s1, Student s2);


};

Student compare(Student s1, Student s2){
    if(s1.marks > s2.marks){
        return s1;
    }
    else{
        return s2;
    }
}


int main(){

    Student s1, s2;
    s1.setStudent("Alice", 85);
    s2.setStudent("Bob", 92);
    
    Student highest = compare(s1, s2);
    
    std::cout << "Student with higher marks:" << std::endl;
    highest.getStudent();


}
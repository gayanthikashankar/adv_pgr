#include <iostream>
#include <string>
/*
get code


if we dont use vritual: 
- even if we change the type of o1 to s1, it will stick to its own method
- wont go into any other method in any other class


*/


class univ{
    //string name;
    //int id;

    public: 
    virtual void display(){
        //std::cout<< "name: " << name << "\n";
        //std::cout<< "id: " << id << "\n";
        std::cout<< "Welcome from the class university: " << id << "\n";
    }
};

class student : public univ{
    public:
    void display(){
        std::cout << "Welcome from class studnet" << "\n";
    }
    
};

int main(){
    univ* o1;
    univ* ob;
    o1 = &ob;
    o1->display();

    student* s1;
    student ob1;
    s1 = &ob1;
    s1->display();

    //s1->(student*)o1;

    o1 -> s1; //upcasting: static binding
    o1->display();

    ob.display();

}


int main(){
    univ ob;  // Create an actual univ object
    univ* o1 = &ob;  // Point o1 to the univ object
    o1->display();
    
    student ob1;  // Create an actual student object
    student* s1 = &ob1;  // Point s1 to the student object
    s1->display();
    
    // Correct upcasting (derived class pointer to base class pointer)
    o1 = s1;  // Point base class pointer to derived object
    o1->display();
    
    ob.display();  // Call display on the univ object
    
    return 0;
}
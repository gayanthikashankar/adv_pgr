#include <iostream>
//classes, instance, object, attributes, methods
class Humans{

    //attributes
    public:
    std::string name = "Rick"; //default attributes
    std::string occupation = "Doctor";
    int age = 44;

    //methods
    void eat(){
        std::cout<<"This person is currently eating\n";
    }

    void sleep(){
        std::cout<<"This person is currently sleeping\n";
    }
};

int main(){
    Humans c1;
    c1.name = "Georgia";
    c1.occupation = "Engineer";
    c1.age = 25;

    std::cout<<c1.name<<"\n";
    std::cout<<c1.occupation<<"\n";
    std::cout<<c1.age<<"\n";

    Humans c2;

    std::cout<<c2.name<<"\n";
    std::cout<<c2.occupation<<"\n";
    std::cout<<c2.age<<"\n";

    c2.eat();
    c2.sleep();
}
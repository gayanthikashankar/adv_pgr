#include <iostream>
#include <string>

/*
private: can't access that attribute outside of the class
*/

class employee{
    public:
    std::string name;
    int id;

    void set_salary(double potential_sal){
        salary = potential_sal;
    }

    double get_salary(){
        return salary;
    }

    void print_bonus(){
        std::cout<< "Bonus: " << calc_bonus() << "\n";
    }

    private: //info hiding
    double salary;
    double calc_bonus(){
        return salary*0.10;
    }

};

int main(){

    employee e1;
    e1.name = "George";
    e1.id = 54;

    std::cout << e1.name << std::endl;
    std::cout << e1.id << std::endl;

    e1.set_salary(7000);
    std::cout << "salary: " << e1.get_salary() << std::endl;

    e1.print_bonus();



}

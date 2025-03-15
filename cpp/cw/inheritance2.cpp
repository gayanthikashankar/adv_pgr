#include <iostream>
using namespace std;
class employee{
    public:
    int id;
    int salary;
    string name;

    //public: ==> automatically becomes private
    void get_details(void){
        cout<< "id: "<< id <<endl;
        cout<< "salary: "<< salary <<endl;
        cout<< "name: "<< name <<endl;

    }
    employee(int id, int salary, string name){
        this->id=id;
        this->salary=salary;
        this->name=name;
    }

};

/*
employer is an engineer that takes all the public data members and data methods
this engineer can access all the datat members and methods that we declared in employees
only can access public data methods when we define as public
*/
class engineer : public employee{
    public: 
        string skill;
        //constructor, 3 can copy from employee class (called using method)
        engineer(int id, int salary, string name, string skill): employee(id, salary, name, skill){
            this-> skill = skill;
        }
        void get_2(void){
            cout<< "skill" << skill<< endl;
        }
};



int main(){
    engineer e1(1,90000, "bob", "c++ expert");
    e1.get_details();
    e1.get_2();
    return 0;
}





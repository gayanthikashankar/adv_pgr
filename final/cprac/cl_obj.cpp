//CLASSES AND OBJECTS

#include <iostream>
#include <string>
using namespace std;

//class = user defined data type
//object = instance of class

class BankAccount{
    public: //access specfier: these memebsr are accessible form outside the class
    //member variables (attributes): variables defined inside a class
    string name; 
    int balance;

    //member function: function defiend inside a class
    //can directly access and work with memebr variables
    void withdraw(int amt){ 
        balance = balance - amt;
    }

    void print(){
        cout << name << " has " << "$" << balance << endl;
    }

};


int main(){
    BankAccount account1; //object of class BankAccount
    account1.name = "Gayanthika";
    account1.balance = 777;
    account1.print();
    //withdraw
    account1.withdraw(100);
    account1.print();

}
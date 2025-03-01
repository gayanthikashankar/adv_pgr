/*
Implement a class BankAccount where the interest rate is shared among all accounts using a static variable.
 The interest rate should be modifiable using a static function.
*/

#include <iostream>
class BankAccount{
private:
    double balance;
    std::string actholder;
public:
    static double interestrate;
    //constructor
    BankAccount(double balance, std::string actholder){
        this->balance = balance;
        this->actholder = actholder;
    }
    //display acct info
    void displayAccount() {
        std::cout << "Account Holder: " << actholder << std::endl;
        std::cout << "Balance: $" << balance << std::endl;
        std::cout << "Current Interest Rate: " << interestrate * 100 << "%" << std::endl;
    }
    //apply interest to balance
    void applyinterest(){
        balance += balance * interestrate;
    }
    //static method to display interest rate
    static void displayInterestRate() {
        std::cout << "Current Interest Rate: " << interestrate * 100 << "%" << std::endl;
    }
    //modify interest rate
    static void setInterestrate(double newRate) {
        interestrate = newRate;
    }
};
//init static var
double BankAccount::interestrate = 0.05;
int main(){
    BankAccount account1(1000.0, "John Doe");
    BankAccount account2(2000.0, "Jane Smith");
    //curr interets rate
    BankAccount::displayInterestRate();
    //acct info
    account1.displayAccount();
    account2.displayAccount();
    //change ir
    BankAccount::setInterestrate(0.06);
    BankAccount::displayInterestRate();
    //apply interest, updated balance
    account1.applyinterest();
    account2.applyinterest();
    account1.displayAccount();
    account2.displayAccount();

}
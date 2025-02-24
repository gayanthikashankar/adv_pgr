/*
you are designing a banking system where different types of bank accounts are managed
create a base class BankAccount  that contains
- a protected balance (double balance) to store the account balance
- a constructor to initialize the balance
- a public function showBalance() to display the balance

Create a derived class SavingsAccount that privately inherits from BankAccount
-Define a public function addInterest(double rate) which calculates and adds interest based on the given rate (the percentage)
- Define a function witjdraw(double ammount), which allows withdrawal only is sufficient balance is available

Key contraints:
- SavingsAccount should not expose the public members of BackAccount directly, meaning ShowBalance() should not be directly available to main()
The balance should be manipulated only inside SavingsAccount
*/

#include <iostream>
using namespace std;

class BankAccount {
protected:
    double balance;
public:
    
    BankAccount(double b = 0) : balance(b) {}
    
    void set(double b) {
        balance = b;
    }
    
    
    void showBalance() const {
        cout << "Current balance: $" << balance << endl;
    }
    
    
    double getBalance() const { 
        return balance; 
    }
};

class SavingsAccount : private BankAccount {  //private inheritance
public:
    //Constructor that calls base class constructor
    SavingsAccount(double initialBalance = 0) : BankAccount(initialBalance) {}
    
    
    void addInterest(double rate) {
        double interest = balance * (rate / 100.0);
        balance += interest;
        cout << "Interest added: $" << interest << endl;
    }
    
    
    bool withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful. Amount: $" << amount << endl;
            return true;
        } else {
            cout << "Insufficient balance for withdrawal!" << endl;
            return false;
        }
    }
    
    void displayBalance() const {
        cout << "Savings Account Balance: $" << balance << endl;
    }
    
    void deposit(double amount) {
        balance += amount;
        cout << "Deposit successful. Amount: $" << amount << endl;
    }
};

int main() {
    SavingsAccount savings(1000);  
    
    savings.displayBalance();
    
    savings.deposit(500);
    savings.displayBalance();
    
    savings.addInterest(5.0);  
    savings.displayBalance();
    
    savings.withdraw(200);
    savings.displayBalance();
    
    savings.withdraw(2000);
    savings.displayBalance();
    
    return 0;
}
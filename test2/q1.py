'''
banking system
classes: BankAccount, SavingsAccount, CheckingAccount
Methods: depositing, withdrawing, transferring funds

'''

class BankAccount:
    def __init__(self, name, balance):
        self.name = name
        self.balance = balance

    def deposit(self, amount):
        self.balance += amount
        return self.balance

    def withdraw(self, amount):
        if amount > self.balance:
            return "Insufficient funds"
        self.balance -= amount
        return self.balance

    def transfer(self, amount, other_account):
        if amount > self.balance:
            return "Insufficient funds"
        self.balance -= amount
        other_account.balance += amount
        return f"Transferred {amount} to {other_account.name}. New balance: {self.balance}"

class SavingsAccount(BankAccount):
    def __init__(self, name, balance):
        super().__init__(name, balance)
    
    def withdraw(self, amount):
        if amount > self.balance:
            return "Insufficient funds"
        self.balance -= amount
        return self.balance

class CheckingAccount(BankAccount):
    def __init__(self, name, balance):
        super().__init__(name, balance)

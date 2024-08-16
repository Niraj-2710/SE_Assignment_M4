#include <iostream>
using namespace std;

class BankAccount 
{
private:
    string accountHolder;
    double balance;

public:
    
    BankAccount(const std::string& name, double initialBalance) 
	{
        accountHolder = name;
        balance = initialBalance;
    }

    
    void deposit(double amount) 
	{
        if (amount > 0) 
		{
            balance += amount;
            cout << "\n\n\t -- Deposited " << amount << "\n\n\t -- New balance: " << balance << endl;
        } 
		else 
		{
            cout << "\n\n\t -- Invalid deposit amount. Please enter a positive value." << endl;
        }
    }

    
    void withdraw(double amount) 
	{
        if (amount > 0 && amount <= balance) 
		{
            balance -= amount;
            cout << "\n\n\t -- Withdrawn " << amount << "\n\n\t -- New balance : " << balance << endl;
        } else {
            cout << "\n\n\t -- Insufficient funds or invalid withdrawal amount." << endl;
        }
    }

    void display() 
	{
        cout << "\n\n\t -- Account Holder: " << accountHolder << endl;
        cout << "\n\n\t -- Balance: " << balance << endl;
    }
};

 main() 
 {
    
    BankAccount myAccount("unknown", 1000.0);

    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);

    myAccount.display();
}


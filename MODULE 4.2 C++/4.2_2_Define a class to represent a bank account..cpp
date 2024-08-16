/* Define a class to represent a bank account. Include the following members

1. Data Member: 
--> Name of the depositor 
--> Account Number 
--> Type of Account 
--> Balance amount in the account */

#include <iostream>
using namespace std;

class BankAccount 
{
	private:
    string depositorName;
    int accountNumber;
    string accountType;
    double balance;
		
		public:
    	BankAccount(string name, int number,string type, double initialBalance = 0.0) 
		{
        depositorName = name;
        accountNumber = number;
        accountType = type;
        balance = initialBalance;
    	}

		string DepositorName() const 
	{
        return depositorName;
    }

    int AccountNumber() const 
	{
        return accountNumber;
    }

    string AccountType() const 
	{
        return accountType;
    }

    double Balance() const 
	{
        return balance;
    }

    void deposit(double amount) 
	{
        balance += amount;
    }

    bool withdraw(double amount) 
	{
        if (balance >= amount) 
		{
            balance -= amount;
            return true; 
        } 
			else 
		{
            return false;
        }
    	}
	};
	
 main() 
{
    BankAccount account("unknown", 24356, "Savings", 100000.0);

    cout << "\n\n\t --- Account Details ---" <<endl;
	cout << "\n\n\t ---> Name :" << account.DepositorName() <<endl;
    cout << "\n\n\t ---> Account Number :" << account.AccountNumber() <<endl;
    cout << "\n\n\t ---> Account Type :" << account.AccountType() <<endl;
    cout << "\n\n\t ---> Balance :" << account.Balance() <<endl;

    account.deposit(2000.0);
    cout << "\n\n\t -> Balance after deposit :" << account.Balance() <<endl;

    if (account.withdraw(000.0)) 
	{
        cout << "\n\n\t ---> Total Balance :" << account.Balance() <<endl;
    } 
		else 
	{
        cout << "\n\n\t --> Insufficient balance." <<endl;
    }
}


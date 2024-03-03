/*
Programmer : Riya Bhart
RollID: 23k-0063
*/

#include <iostream>
using namespace std;
class BankAccount
{
private:
    long accountNumber;
    string accountHolderName;
    long balance;

public:
    BankAccount(){};
    BankAccount(long accountNumber,
                string accountHolderName,
                long balance)
    {
        this->accountNumber = accountNumber;
        this->accountHolderName = accountHolderName;
        this->balance = balance;
    }
    void deposit(double amount)
    {

        cout << "Deposit Successful" << endl;
        balance += amount;
    }
    void withdraw(double amount)
    {
        if (amount < balance)
        {
            balance -= amount;
            cout << "Withdrawal sucessful.";
            // balance -= amount;
        }
        if (amount > balance)
        {
            cout << "Not enough balance in account";
        }
    }
    void display()
    {
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Account Number : " << accountNumber << endl;
        cout << "Balance : " << balance << endl;
    }
};

int main()
{
    BankAccount accounts[3] = {
        BankAccount(123456, "ABC", 0),
        BankAccount(2345, "xyz", 19000),
        BankAccount(345, "ert", 20000),
    };
    for (int i = 0; i < 3; i++)
    {
        cout << "Details for Account " << i + 1 << endl;
        accounts[i].display();
        accounts[i].deposit(0);
        accounts[i].withdraw(200);
        cout << endl
             << endl;
    }
    cout << "\nAfter updation: ";
    for (int i = 0; i < 3; i++)
    {
        cout << endl;
        cout << "Details for Account " << i + 1 << endl;
        accounts[i].display();
    }

    return 0;
}

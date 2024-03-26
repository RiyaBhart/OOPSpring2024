#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
  int accountId;
  double balance;
  int* transactionHistory;
  int numTransactions;

public:
  BankAccount(int acctId, double bal, int* transHistory, int numTrans)
  {
    this->accountId = acctId;
    this->balance = bal;
    this->transactionHistory = new int[numTrans];
    for (int i = 0; i < numTrans; i++)
    {
      this->transactionHistory[i] = transHistory[i];
    }
    this->numTransactions = numTrans;
  }

  BankAccount(const BankAccount& other)
  {
    this->accountId = other.accountId;
    this->balance = other.balance;
    this->numTransactions = other.numTransactions;
    this->transactionHistory = new int[other.numTransactions];
    for (int i = 0; i < other.numTransactions; i++)
    {
      this->transactionHistory[i] = other.transactionHistory[i];
    }
  }

  ~BankAccount()
  {
    delete[] transactionHistory;
  }

  void display()
  {
    cout << "Account ID: " << accountId << endl;
    cout << "Balance: " << balance << endl;
    cout << "Transaction History: ";
    for (int i = 0; i < numTransactions; i++)
    {
      cout << transactionHistory[i] << " ";
    }
    cout << endl;
  }

  void updateTransactionHistory(int* transHistory, int numTrans)  
  {
    delete[] transactionHistory;
    transactionHistory = new int[numTrans];
    for (int i = 0; i < numTrans; i++)
    {
      transactionHistory[i] = transHistory[i];
    }
    numTransactions = numTrans;
  }
};

int main()
{
  int transHistory1[] = {1300, 2000, 300};
  int transHistory2[] = {100, 200, 400};
  BankAccount acct1(1, 1000, transHistory1, 3);
  BankAccount acct2(2, 500, transHistory2, 3);
  acct1.display();
  acct2.display();
  acct1.updateTransactionHistory(transHistory2, 3);
  acct1.display();
  acct2.display();
  return 0;
}

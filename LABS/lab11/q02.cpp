#include <iostream>
using namespace std;
class Account{
    protected:
    int accountNumber;
    double balance;
    public:
    Account(int accountNumber,double balance){
        this->accountNumber=accountNumber;
        this->balance=balance;
    }
    virtual double deposit(double amount)=0;
    virtual double withdraw(double amount)=0;
    virtual double calculateInterest()=0;
    int getAccountNumber(){
        return accountNumber;
    }
    double getBalance(){
        return balance;
    }
};
class SavingsAccount:public Account{
    private:
    double interestRate;
    public:
    SavingsAccount(double interestRate,int accountNumber,double balance):Account(accountNumber,balance){
        this->interestRate=interestRate;
    }
    double deposit(double amount) override {
        balance +=amount;
        cout<<"Amount Deposited."<<endl<<"New Amoount = "<<balance<<endl;
    }
    double withdraw(double amount)override {
        balance-=amount;
        cout<<"Amount Withdrawal Done."<<endl<<"New Amoount = "<<balance<<endl;
    }
    double calculateInterest()override{
        double Interest = balance*interestRate;
        return Interest;
    }
};
class CurrentAccount:public Account{
    private:
    double overdraftLimit;
    public:
    CurrentAccount(double overdraftLimit,int accountNumber,double balance):Account(accountNumber,balance){
        this->overdraftLimit=overdraftLimit;
    }
    double deposit(double amount) override {
        balance +=amount;
        cout<<"Amount Deposited."<<endl<<"New Amoount = "<<balance<<endl;
    }
    double withdraw(double amount)override {
        balance-=amount;
        cout<<"Amount Withdrawal Done."<<endl<<"New Amoount = "<<balance<<endl;
    }
    double calculateInterest()override{
        cout<<"no interest calculated."<<endl;
        cout<<"OverDraft Limit is : "<<overdraftLimit<<endl;
    }
    
};
int main(){
    Account *A;
    SavingsAccount SA(3.0,1234,4500.5);
    A=&SA;
    cout<<endl<<"SAVINGS ACCOUNT DETAILS "<<endl;
    A->withdraw(200);
    A->getBalance();
    A->deposit(300);
    A->getBalance();
    A->calculateInterest();
    CurrentAccount CA(2.0,2345,6700.4);
    A=&CA;
     cout<<endl<<"CURRENT ACCOUNT DETAILS "<<endl;
    A->deposit(100);
    A->getBalance();
    A->withdraw(50);
    A->getBalance();
}

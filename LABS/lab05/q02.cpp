#include <iostream>
using namespace std;

class LoanCalculator
{
private:
    const float interestRate;
    int loanAmount;
    int months;

public:
    LoanCalculator() : interestRate(0.2), loanAmount(0), months(0) {}

    LoanCalculator(int amount, int duration) : interestRate(0.2), loanAmount(amount), months(duration) {}

    void setLoanAmount(int amount)
    {
        loanAmount = amount;
    }

    int getLoanAmount()
    {
        return loanAmount;
    }

    void setMonths(int duration)
    {
        months = duration;
    }

    int getMonths()
    {
        return months;
    }

    int calculateMonthlyPayment()
    {
        return (loanAmount / months) * interestRate;
    }
};

int main()
{
    cout << "\nProgrammer : Riya Bhart\n Roll ID : 23k-0063\n"
         << endl;
    LoanCalculator loan;

    loan.setLoanAmount(2000);
    loan.setMonths(5);

    cout << "You have taken a loan of " << loan.getLoanAmount() << " rupees and you have " << loan.getMonths() << " months to repay it." << endl;

    cout << "Your monthly payment for the next " << loan.getMonths() << " months will be " << loan.calculateMonthlyPayment() << " rupees." << endl;

    return 0;
}

/*You are asked to write a C++ program that calculates the Least Common Multiple (LCM)
and Greatest Common Divisor (GCD) of two numbers. Implement two separate recursive
functions, calculateLCM and calculateGCD, each handling the corresponding task.*/
// NAME : RIYA BHART
// ID : 23K-0063


#include <iostream>
using namespace std;
int CalculateGCD(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return CalculateGCD(b, a % b);
    }
}
int CalculateLCM(int a, int b)
{
    return (a * b) / CalculateGCD(a, b);
}
int main()
{
    int m, n;
    cout << "Enter two numbers" << endl;
    cin >> m >> n;
    int x = CalculateGCD(m, n);
    int y = CalculateLCM(m, n);
    cout << "Greatest Common Divisor is " << x << endl;
    cout << "Least Common Multiple is " << y << endl;
}

#include <iostream>
using namespace std;

class NumberOperator
{
private:
    int value;

public:
    NumberOperator(int val) : value(val) {}

    NumberOperator &operator--()
    {

        value *= 4;
        return *this;
    }

    NumberOperator operator--(int val)
    {
        NumberOperator temp = val;

        value /= 4;
        return temp;
    }

    double getValue()
    {
        return value;
    }
};

int main()
{

    NumberOperator num(10);

    cout << "Initial value: " << num.getValue() << endl;

    --num;
    cout << "After prefix decrement: " << num.getValue() << endl;

    num--;
    cout << "After postfix decrement: " << num.getValue() << endl;

    return 0;
}

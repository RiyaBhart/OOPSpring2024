// NAME : RIYA BHART
// ROLL ID: 23K-0063


#include <iostream>
using namespace std;

void recursiveSwap(int *a, int *b, int c)
{

    if (c)
    {
        *a ^= *b;

        return recursiveSwap(b, a, c - 1);
    }
}

int main()
{
    int x, y;
    cout << "Enter an integer: ";
    cin >> x;
    cout << "Enter another integer: ";
    cin >> y;

    cout << "Before swapping: x = " << x << ", y = " << y << endl;

    // Call the recursiveSwap function to swap x and y
    recursiveSwap(&x, &y, 3);

    cout << "After swapping: x = " << x << ", y = " << y << endl;

    return 0;
}

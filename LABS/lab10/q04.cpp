#include <iostream>
using namespace std;

class Perimeter
{
private:
    int length = 5;
    int breath = 2;
    int perimeter = 2 * (length + breath);

public:
    friend class Print;
};
class Print
{
public:
    void print(Perimeter p)
    {
        cout << "Perimeter is : " << p.perimeter << endl;
    }
};

int main()
{
    Perimeter a1;
    Print a2;
    a2.print(a1);
}

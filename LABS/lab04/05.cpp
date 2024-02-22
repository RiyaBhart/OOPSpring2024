/*
Name : Riya Bhart
ID: 23K-0063
*/

#include <iostream>
#include <string>
using namespace std;

class Office
{
private:
    string Location;
    int SeatingCapacity;
    string *Furniture;

public:
    Office(string location = "", int capacity = 0, int furniture = 3) : Location(location), SeatingCapacity(capacity)
    {
        Furniture = new string[furniture];
    }

    ~Office()
    {
        delete[] Furniture;
    }

    void display()
    {
        cout << "Location: " << Location << endl;
        cout << "Seating Capacity: " << SeatingCapacity << endl;
        cout << "Furniture:" << endl;
        for (int i = 0; i < 3; ++i)
        {
            cout << Furniture[i] << endl;
        }
    }
};

int main()
{

    string furniture[3] = {"desk", "chair", "table"};
    Office *office = new Office("ABC", 30, 3);

    office->display();

    delete office;

    return 0;
}

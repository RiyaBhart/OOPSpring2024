/*
Name:Riya Bhart
ID:23K-0063

*/

#include <iostream>
#include <string>

using namespace std;

class Office
{
private:
    string Location;
    int SeatingCapacity;
    string Furniture[3];

public:
    Office(string location = "", int seatingcapacity = 0, string furniture1 = "", string furniture2 = "", string furniture3 = "") : Location(location), SeatingCapacity(seatingcapacity), Furniture{furniture1, furniture2, furniture3} {}

    void displayInfo()
    {
        cout << "Location: " << Location << endl;
        cout << "Seating Capacity: " << SeatingCapacity << endl;
        cout << "Furniture: ";
        for (int i = 0; i < 3; i++)
        {
            cout << Furniture[i];
            if (i != 2)
                cout << ", ";
        }
        cout << endl;
    }
};

int main()
{
    Office office1;
    Office office2("ABC");
    Office office3("BCD", 50);
    Office office4("CDE", 100, "table", "chair", "book");

    cout << "Office 1:" << endl;
    office1.displayInfo();
    cout << endl;

    cout << "Office 2: " << endl;
    office2.displayInfo();
    cout << endl;

    cout << "Office 3: " << endl;
    office3.displayInfo();
    cout << endl;

    cout << "Office 4:" << endl;
    office4.displayInfo();
    cout << endl;

    return 0;
}

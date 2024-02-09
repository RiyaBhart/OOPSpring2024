// RIYA BHART
// ROLL ID: 23K-0063

#include <iostream>
using namespace std;

class WaterBottle
{
    string Company;
    string Color;
    int watercapacityinl;  // in litres
    int watercapacityinml; // in millilitres

public:
    void setcompany(string company)
    {
        Company = company;
    }

    string getcompany()
    {
        return Company;
    }

    void setColor(string color)
    {
        Color = color;
    }

    string getColor()
    {
        return Color;
    }

    void watercapinlset(int watercapinl)
    {
        watercapacityinl = watercapinl;
    }

    int watercapinlget()
    {
        return watercapacityinl;
    }

    void watercapinmlset(int watercapinml)
    {
        watercapacityinml = watercapinml;
    }

    int watercapinmlget()
    {
        return watercapacityinml;
    }

    void updatewatercapinl(int newcapinl)
    {
        watercapacityinl = newcapinl;
    }

    void updatewatercapinml(int newcapinml)
    {
        watercapacityinml = newcapinml;
    }
};

int main()
{
    WaterBottle w1;
    w1.setcompany("Aqua");
    w1.setColor("Blue");
    w1.watercapinlset(1);    // 1 litre
    w1.watercapinmlset(500); // 500 millilitres

    cout << "Company: " << w1.getcompany() << endl;
    cout << "Color: " << w1.getColor() << endl;
    cout << "Capacity (in litres): " << w1.watercapinlget() << endl;
    cout << "Capacity (in millilitres): " << w1.watercapinmlget() << endl;

    return 0;
}

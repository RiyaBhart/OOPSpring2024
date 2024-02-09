//NAME : RIYA BHART
// ROLL ID : 23K-0063
#include <iostream>
using namespace std;

class BoardMarker
{
    string Brand;
    string Shade;
    bool Refillable;
    bool InkStatus;

public:
    void setbrand(string brand)
    {
        Brand = brand;
    }

    string getbrand()
    {
        return Brand;
    }

    void setshade(string shade)
    {
        Shade = shade;
    }

    string getshade()
    {
        return Shade;
    }

    void setRefillable(bool refil)
    {
        Refillable = refil;
    }

    bool getRefillable()
    {
        return Refillable;
    }

    void setInkStatus(bool inkstatus)
    {
        InkStatus = inkstatus;
    }

    bool getInkStatus()
    {
        return InkStatus;
    }

    void write()
    {
        if (InkStatus)
        {
            cout << "Ink is still remaining in " << Shade << " with brand " << Brand;
        }
        else
        {
            cout << "Marker has run out of ink";
        }
    }

    void refill()
    {
        if (Refillable)
        {
            cout << "Marker is refillable";
        }
        else
        {
            cout << "Marker is not refillable";
        }
    }
};

int main()
{
    BoardMarker marker;
    marker.setbrand("Dollar");
    marker.setshade("Black");
    marker.setRefillable(true);
    marker.setInkStatus(true);

    cout << marker.getbrand() << endl;
    cout << marker.getshade() << endl;
    cout << marker.getRefillable() << endl;
    cout << marker.getInkStatus() << endl;

    marker.refill();
    cout << endl;
    marker.write();
    cout << endl;

    return 0;
}

/*
Programmer : Riya Bhart
RollID: 23k-0063
*/

#include <iostream>
using namespace std;

class Square
{
    float sideLength;
    float area;
    static float allareas;

public:
    Square(float sideLength)
    {
        this->sideLength = sideLength;
        calculateArea();
    }

    void calculateArea()
    {
        area = sideLength * sideLength;
        allareas += area;
    }

    void setsideLength(float sideLength)
    {
        this->sideLength = sideLength;
        calculateArea();
    }

    float getsideLength()
    {
        return sideLength;
    }

    float getarea()
    {
        return area;
    }

    static float getallAreas()
    {
        return allareas;
    }
};

float Square::allareas = 0;

int main()
{
    Square s1(2.5);
    Square s2(2.03);
    Square s3(3.1);

    cout << "Area of square1: " << s1.getarea() << endl;
    cout << "Area of square2: " << s2.getarea() << endl;
    cout << "Area of square3: " << s3.getarea() << endl;
    cout << "Total of all areas: " << Square::getallAreas() << endl;

    return 0;
}

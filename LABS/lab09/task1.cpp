#include <iostream>
#include <cmath>
using namespace std;
const double PI = 3.14;
class Shape
{
    double radius;
    double length;
    double width;
    double base;
    double height;

public:
    Shape(double radius, double length, double width, double base, double height)
    {
        this->radius = radius;
        this->length = length;
        this->width = width;
        this->base = base;
        this->height = height;
    }
    double area(double radius)
    {
        return PI * radius * radius;
    }
    double area(double length, double width)
    {
        return length * width;
    }
    double area(double height, double base, double con)
    {
        return con * base * height;
    }
    double perimeter(double radius)
    {
        return 2 * PI * radius;
    }
    double perimeter(double length, double width)
    {
        return 2 * (length + width);
    }
    double perimeter(double hyp, double base, double height)
    {
        // hyp = sqrt((base*base)+(height*height));
        return hyp + base + height;
    }
};
int main()
{
    Shape s(2, 3, 4, 5, 6);
    double circle = s.area(2);
    double rectangle = s.area(3, 4);
    double triangle = s.area(5, 6, 0.5);
    cout<<"Riya Bhart\n 23K-0063\n";
    cout << "area of circle : " << circle << endl;
    cout << "area of rectangle : " << rectangle << endl;
    cout << "area of triangle : " << triangle << endl;
    cout << "Perimeter of circle : " << s.perimeter(2) << endl;
    cout << "Perimeter of rectangle : " << s.perimeter(3, 4) << endl;
    cout << "Perimeter of triangle : " << s.perimeter(15, 4, 5) << endl;

    return 0;
}

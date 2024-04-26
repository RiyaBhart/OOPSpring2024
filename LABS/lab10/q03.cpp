#include <iostream>
using namespace std;

class Shape
{
private:
    double width;
    double height;

public:
    Shape(double w, double h) : width(w), height(h) {}

    double Area() const
    {
        return width * height;
    }

    Shape operator+(const Shape &other)
    {
        double area1 = this->Area();

        double area2 = other.Area();

        return Shape(area1 + area2, 2.0);
    }

    void DisplayArea()
    {
        cout << "Area: " << Area() << endl;
    }
};

int main()
{
    Shape shape1(4, 8);
    Shape shape2(5, 9);

    cout << "Area of shape1: ";
    shape1.DisplayArea();

    cout << "Area of shape2: ";
    shape2.DisplayArea();

    Shape combinedShape = shape1 + shape2;

    cout << "Combined Area: ";
    combinedShape.DisplayArea();

    return 0;
}

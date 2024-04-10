#include <iostream>
using namespace std;
double const PI = 3.14;
class Shape
{
public:
    virtual double area()
    {
        cout << "area of shape." << endl;
    }
    virtual double perimeter()
    {
        cout << "perimeter of shape." << endl;
    }
};
class Circle : public Shape
{
    double radius;

public:
    Circle(double radius)
    {
        this->radius = radius;
    }
    double area() override
    {
        return PI * radius * radius;
    }
    double perimeter() override
    {
        return 2 * PI * radius;
    }
};
class Rectangle : public Shape
{
    double length;
    double width;

public:
    Rectangle(double length, double width)
    {
        this->length = length;
        this->width = width;
    }
    double area() override
    {
        return length * width;
    }
    double perimeter() override
    {
        return 2 * (length + width);
    }
};
class Square : public Shape
{
    double side;

public:
    Square(double side)
    {
        this->side = side;
    }
    double area() override
    {
        return side * side;
    }
    double perimeter() override
    {
        return side * 4;
    }
};
class Triangle : public Shape
{
    double base;
    double height;
    double hyp;

public:
    Triangle(double base, double height, double hyp)
    {
        this->height = height;
        this->base = base;
        this->hyp = hyp;
    }
    double area() override
    {
        return 0.5 * base * height;
    }
    double perimeter() override
    {

        return hyp + base + height;
    }
    virtual double eqarea()
    {
    }
    virtual double eqperimeter()
    {
    }
};
class EquilateralTriangle : public Triangle
{
    double side;

public:
    EquilateralTriangle( double base, double height, double hyp) : Triangle(base, height, hyp)
    {
        this->base = base;
    }
    double eqarea() override
    {
        return 0.43 * base * base;
    }
    double eqperimeter() override
    {
        return 3 * base;
    }
};

int main()
{
    Shape *s;
    int choice,p1,p2,p3;
    cout << "Select any Shape: 1.Circle \n2.Rectangle \n3.Square \n4.Triangle \n5. Equilateral Triangle\n6. Do for another shape.\n7. End program.\n";
    cin >> choice;
    cout << endl;
    switch (choice)
    {
    case 1:
    {
        cout<<"Enter the radius of circle.\n";
        cin>>p1;
        Circle c(p1);
        s = &c;
        cout << "Area of circle : " << s->area() << endl;
        cout << "Perimeter of Circle : " << s->perimeter() << endl;
        break;
    }
    case 2:
    {
        cout<<"Enter the length and width of Rectangle.\n";
        cin>>p1,p2;
        Rectangle r(p1, p2);
        s = &r;
        cout << "Area of Rectangle : " << s->area() << endl;
        cout << "Perimeter of Rectangle : " << s->perimeter() << endl;
        break;
    }
    case 3:
    {
        cout<<"Enter the length of side of square.\n";
        cin>>p1;
        Square sq(p1);
        s = &sq;
        cout << "Area of Square : " << s->area() << endl;
        cout << "Perimeter of Square : " << s->perimeter() << endl;
        break;
    }
    case 4:
    {
        cout<<"Enter the base,height & hypotenuse.\n";
        cin>>p1,p2,p3;
        Triangle t(p1, p2, p3);
        s = &t;
        cout << "Area of Triangle : " << s->area() << endl;
        cout << "Perimeter of Triangle : " << s->perimeter() << endl;
        break;
    }
    case 5:
    {
        Triangle *t;
        cout<<"Enter the base,height & hypotenuse.\n";
        cin>>p1,p2,p3;
        EquilateralTriangle et(p1,p2,p3);
        t = &et;
        cout << "Area of Equilateral Triangle : " << t->area() << endl;
        cout << "Perimeter of Equilateral Triangle : " << t->perimeter() << endl;
        break;
    }
    default:
        cout << "Invalid choice." << endl;
    }
    return 0;
}

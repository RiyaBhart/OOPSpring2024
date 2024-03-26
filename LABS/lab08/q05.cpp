#include <iostream>
using namespace std;
class Vehicle
{
public:
    string make;
    string model;
    int year;
    Vehicle(string make, string model, int year)
    {
        this->make = make;
        this->model = model;
        this->year = year;
    }
    void display()
    {
        cout << "Make : " << make << endl;
        cout << "Model : " << model << endl;
        cout << "Year : " << year << endl;
    }
};
class Car : public Vehicle
{
public:
    int numberofdoors;
    int fuelefficiency;
    Car(int numberofdoors, int fuelefficiency, string make, string model, int year) : Vehicle(make, model, year)
    {
        this->numberofdoors = numberofdoors;
        this->fuelefficiency = fuelefficiency;
    }
    void display()
    {
        Vehicle::display();
        cout << "Number of Doors : " << numberofdoors << endl;
        cout << "Fuel Efficiency : " << fuelefficiency << endl;
    }
};
class ElectricCar : public Car
{
public:
    int batterylife;
    ElectricCar(int batterylife, int numberofdoors, int fuelefficiency, string make, string model, int year) : Car(numberofdoors, fuelefficiency, make, model, year)
    {
        this->batterylife = batterylife;
    }
    void display()
    {
        // Vehicle::display();
        Car::display();
        cout << "Batter life : " << batterylife << endl;
    }
};
int main()
{
    ElectricCar e(50, 4, 16, "Toyota", "Corolla", 2010);
    e.display();
}

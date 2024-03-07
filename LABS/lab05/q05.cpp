#include <iostream>
#include <string>
using namespace std;

class Engine;
class Wheel;
class Headlight;
class Steering;

class Engine
{
    string type;

public:
    Engine(string type) : type(type) {}
    string getType() const { return type; }
};

class Wheel
{
    int size;

public:
    Wheel(int size) : size(size) {}
    int getSize() const { return size; }
};

class Headlight
{
    string type;

public:
    Headlight(string type) : type(type) {}
    string getType() const { return type; }
};

class Steering
{
    string type;

public:
    Steering(string type) : type(type) {}
    string getType() const { return type; }
};

class Car
{
    Engine *engine;
    Wheel *wheels[4];
    Headlight *headlights[2];
    Steering *steering;

public:
    Car(Engine *engine, Wheel *wheels[], Headlight *headlights[], Steering *steering) : engine(engine), steering(steering)
    {
        for (int i = 0; i < 4; ++i)
        {
            this->wheels[i] = wheels[i];
        }
        for (int i = 0; i < 2; ++i)
        {
            this->headlights[i] = headlights[i];
        }
    }

    ~Car()
    {

        delete engine;
        for (int i = 0; i < 4; ++i)
        {
            delete wheels[i];
        }
        for (int i = 0; i < 2; ++i)
        {
            delete headlights[i];
        }
        delete steering;
    }

    Engine *getEngine() { return engine; }
    Wheel *getWheel(int index) { return wheels[index]; }
    Headlight *getHeadlight(int index) { return headlights[index]; }
    Steering *getSteering() { return steering; }
};

int main()
{
    cout << "Programmer : Riya Bhart\n ID : 23K-0063\n"
         << endl;
    Engine *engine = new Engine("REVO");
    Wheel *wheels[4] = {new Wheel(20), new Wheel(20), new Wheel(20), new Wheel(20)};
    Headlight *headlights[2] = {new Headlight("WHITE"), new Headlight("WHITE")};
    Steering *steering = new Steering("POWER");

    Car car(engine, wheels, headlights, steering);

    cout << "Car's engine type: " << car.getEngine()->getType() << endl;
    for (int i = 0; i < 4; ++i)
    {
        cout << "Wheel " << i + 1 << " size: " << car.getWheel(i)->getSize() << endl;
    }
    for (int i = 0; i < 2; ++i)
    {
        cout << "Headlight " << i + 1 << " type: " << car.getHeadlight(i)->getType() << endl;
    }
    cout << "Steering type: " << car.getSteering()->getType() << endl;

    delete engine;
    for (int i = 0; i < 4; ++i)
    {
        delete wheels[i];
    }
    for (int i = 0; i < 2; ++i)
    {
        delete headlights[i];
    }
    delete steering;

    return 0;
}

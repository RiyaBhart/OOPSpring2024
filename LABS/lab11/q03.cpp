#include <iostream>
using namespace std;
class Vehicle{
    protected:
    string make;
    string model;
    int speed;
    public:
    Vehicle(string make,string model,int speed){
        this->make=make;
        this->model=model;
        this->speed=speed;
    }
    virtual void accelerate()=0;
    virtual void brake()=0;
    virtual double calculateFuelEfficiency()=0;
    string getMake(){
        return make;
    }
    string getModel(){
        return model;
    }
    int getSpeed(){
        return speed;
    }
};
class Car:public Vehicle{
    private:
    double fuelCapacity;
    public:
    Car(double fuelCapacity,string make,string model,int speed):Vehicle(make,model,speed){
        this->fuelCapacity=fuelCapacity;
    }
    void accelerate()override{
        cout<<"Accelerated!"<<endl;
    }
    void brake()override{
        cout<<"Brakes Applied."<<endl;
    }
    double calculateFuelEfficiency() override{
        return fuelCapacity;
    }
};
class Truck:public Vehicle{
    private:
    int CargoCapacity;
    public:
    Truck(int CargoCapacity,string make,string model,int speed):Vehicle(make,model,speed){
        this->CargoCapacity=CargoCapacity;
    }
    void accelerate()override{
        cout<<"TRUCK Accelerated!"<<endl;
    }
    void brake()override{
        cout<<"Brakes Applied on Truck."<<endl;
    }
    double calculateFuelEfficiency() override{
        cout<<"can't be calculated for truck"<<endl;
    }
};
int main(){
    Vehicle *v;
    Car c(20,"Toyota","Altis",160);
    v=&c;
    v->accelerate();
    v->brake();
    Truck t(56,"Suzuki","ABC",170);
    v=&t;
    v->accelerate();
    v->brake();
}

#include <iostream>
using namespace std;
class appointment{
    private:
    double charges;
    string name;
    static  int numofapp;//number of appointments
    static double totalearning;
    public:
    appointment(double charges, string name){
        this->charges=charges;
        this->name = name;
        numofapp++;
        totalearning+=charges;
    }
    void displaydetails(){
        cout<<"Name : "<<name<<endl;
        cout<<"Charges : "<<charges<<endl;
    }
    static double calculateavgcost(){
        if(numofapp == 0){
            return 0.0;
        }
        else{
            return totalearning/numofapp;
        }
    }
};
int appointment::numofapp = 0;
double appointment::totalearning = 0.0;

int main(){
    appointment app1(4000.0, "Haircut");
    appointment app2(10000.0, "Hair color");
    appointment app3(2500.0, "Manicure");

    
    cout << "Appointment 1:" << endl;
    app1.displaydetails();
    cout << endl;

    cout << "Appointment 2:" << endl;
    app2.displaydetails();
    cout << endl;

    cout << "Appointment 3:" << endl;
    app3.displaydetails();
    cout << endl;


    cout << "Average cost per appointment: " << appointment::calculateavgcost() << endl;

    return 0;
} 

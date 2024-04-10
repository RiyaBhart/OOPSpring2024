#include <iostream>
using namespace std;

class Employee {
public:
    int employeeID;
    string employeeName;

    virtual double calculatePay() const {
        return 0.0;
    }

    virtual void displayDetails() const {
        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Name: " << employeeName << endl;
    }
};

class FullTimeEmployee : public Employee {
private:
    double monthlySalary;

public:
    FullTimeEmployee(string name, int id, double monthlySalary) {
        employeeID = id;
        employeeName = name;
        this->monthlySalary = monthlySalary;
    }

    double calculatePay() const override {
        return monthlySalary;
    }

    void displayDetails() const override {
        Employee::displayDetails(); // Call base class displayDetails method
        cout << "Monthly Salary: " << monthlySalary << endl;
    }
};

class PartTimeEmployee : public Employee {
private:
    double hourlyWage;
    double hoursWorked;

public:
    PartTimeEmployee(string name, int id, double hourlyWage, double hoursWorked) {
        employeeID = id;
        employeeName = name;
        this->hourlyWage = hourlyWage;
        this->hoursWorked = hoursWorked;
    }

    double calculatePay() const override {
        return hourlyWage * hoursWorked;
    }

    void displayDetails() const override {
        Employee::displayDetails(); // Call base class displayDetails method
        cout << "Hourly Wage: " << hourlyWage << endl;
        cout << "Hours Worked: " << hoursWorked << endl;
    }
};

int main() {

    cout<<"Riya Bhart\n23K-0063"<<endl;
  
    FullTimeEmployee fullTimeEmp("AAA", 101, 5000.0);
    PartTimeEmployee partTimeEmp("BBB", 102, 15.0, 40.0);

    cout << "Full-Time Employee Details:" << endl;
    fullTimeEmp.displayDetails();
    cout << endl;

    cout << "Part-Time Employee Details:" << endl;
    partTimeEmp.displayDetails();
    cout << endl;

    cout << "Full-Time Employee Pay: Rs" << fullTimeEmp.calculatePay() << endl;
    cout << "Part-Time Employee Pay: Rs" << partTimeEmp.calculatePay() << endl;
    cout << endl;

    Employee *empPtr;
    empPtr = &fullTimeEmp;
    cout << "Pay using base class pointer (Full-Time Employee): Rs" << empPtr->calculatePay() << endl;

    empPtr = &partTimeEmp;
    cout << "Pay using base class pointer (Part-Time Employee): Rs" << empPtr->calculatePay() << endl;

    return 0;
}


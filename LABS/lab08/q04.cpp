#include <iostream>
using namespace std;
class Person{
    public:
    string name;
    int age;
    Person(string name,int age){
        this->name=name;
        this->age=age;
    }
    void display() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
class Student:public Person{
    public:
    int studentid;
    int gradelevel;
    Student(int studentid,int gradelevel,string name,int age):Person(name,age){
        this->studentid=studentid;
        this->gradelevel=gradelevel;
    }
    void display() const {
        Person::display();
        cout << "Student ID: " << studentid << endl;
        cout << "Grade Level: " << gradelevel << endl;
    }
};
class Teacher:public Person{
    public:
    string subject;
    int roomnumber;
    Teacher(string subject,int roomnumber,string name,int age):Person(name,age){
        this->subject=subject;
        this->roomnumber=roomnumber;
    }
    void display() const {
        Person::display();
        cout << "Teacher's Subject: " << subject << endl;
        cout << "Room Number: " << roomnumber << endl;
    }
};
class GraduateStudent:public Teacher,public Student{
    public:
    string nameofta;
    GraduateStudent(string nameofta,string subject,int roomnumber,int studentid,int gradelevel,string nameoft,int ageoft,string nameofs,int ageofs):Teacher(subject,roomnumber,nameoft,ageoft),Student(studentid,gradelevel,nameofs,ageofs){
        this->nameofta=nameofta;
    }
    void display() const {
        cout << "Graduate Student TA Name: " << nameofta << endl;
        Student::display();
        Teacher::display();
    }
};
int main(){
    GraduateStudent g("ABC","OOP",27,123,2,"Rafia",27,"XYZ",19);
    g.display();
}

// NAME : RIYA BHART
// ID : 23K-0063

#include <iostream>
using namespace std;
struct Register
{
    int courseId;
    string courseName;
};
struct Student
{
    int StudentId;
    string firstName;
    string lastName;
    long cellNo;
    string email;
    struct Register course;
};
int main()
{
    Student st[5];
    for (int i = 0; i < 1; i++)
    {
        cout << "Enter course ID" << endl;
        cin >> st[i].course.courseId;
        cout << "Enter course Name" << endl;
        cin >> st[i].course.courseName;
        cout << "Enter Student ID" << endl;
        cin >> st[i].StudentId;
        cout << "Enter Student's First Name" << endl;
        cin >> st[i].firstName;
        cout << "Enter Student's Last Name" << endl;
        cin >> st[i].lastName;
        cout << "Enter student's cell number" << endl;
        cin >> st[i].cellNo;
        cout << "Enter Student's email" << endl;
        cin >> st[i].email;
    }
    cout << endl
         << endl
         << "---------Displaying Information of All Students-----------" << endl
         << endl;
    for (int i = 0; i < 1; i++)
    {
        cout << "Course Name: " << st[i].course.courseName << endl;
        cout << "Course ID: " << st[i].course.courseId << endl;
        cout << "Student's First Name: " << st[i].firstName << endl;
        cout << "Student's First Name: " << st[i].lastName << endl;
        cout << "Student's Cell number: " << st[i].cellNo << endl;
        cout << "Student's Email: " << st[i].email << endl
             << endl;
    }
    return 0;
}

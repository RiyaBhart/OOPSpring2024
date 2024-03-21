/*
NAME : RIYA 
ID: 23K-0063
  */

#include <iostream>
using namespace std;

const int max_course = 5;

class course {
private:
    string coursecode;
    string coursename;
    int coursecredithours;
public:
    course(string code, string name, int creditHours)
        : coursecode(code), coursename(name), coursecredithours(creditHours) {}

    string getCourseCode() const { return coursecode; }
    string getCourseName() const { return coursename; }
    int getCreditHours() const { return coursecredithours; }
};

class student {
private:
    string studentid;
    string studentname;
    course* c[max_course];
    int numcourses;
public:
    student(string studentid, string studentname)
        : studentid(studentid), studentname(studentname), numcourses(0) {}

    void enroll(course* course) {
        if (numcourses < max_course) {
            c[numcourses++] = course;
            cout << "Enrolled in course: " << course->getCourseCode() << endl;
        }
        else {
            cout << "Maximum courses registered" << endl;
        }
    }

    void drop(course* course) {
        bool found = false;
        for (int i = 0; i < numcourses; i++) {
            if (c[i] == course) {
                found = true;
                // Replace the dropped course with the last enrolled course
                c[i] = c[numcourses - 1];
                numcourses--;
                cout << "Dropped course: " << course->getCourseCode() << endl;
                break;
            }
        }
        if (!found) {
            cout << "Course not found." << endl;
        }
    }

    int getTotalCreditHours() const {
        int totalCreditHours = 0;
        for (int i = 0; i < numcourses; i++) {
            totalCreditHours += c[i]->getCreditHours();
        }
        return totalCreditHours;
    }
};

int main() {
   
    course c1("CSC101", "Introduction to Computer Science", 3);
    course c2("MTH101", "Calculus", 3);
    course c3("PHY101", "Physics", 3);

   
    student s("123", "ABC");

    
    s.enroll(&c1);
    s.enroll(&c2);
    s.enroll(&c3);
    s.drop(&c2);

    
    cout << "Total credit hours: " << s.getTotalCreditHours() << endl;

    return 0;
}


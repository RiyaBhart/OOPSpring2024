#include <iostream>
using namespace std;
class Calendar
{
    string month[12] = {"january", "feburary", "march", "april", "may", "june", "july", "august", "september", "october", "november", "december"};
    int year;
    string tasks[12][31];

public:
    Calendar(int currentyear)
    {
        year = currentyear;
    }

    void AddTasks(int date, int month)
    {
        cout << "Enter task: ";
        getline(cin, tasks[month - 1][date - 1]);
        cout << "Task has been added." << endl;
    }
    void RemoveTask(int date, int month)
    {
        tasks[month - 1][date - 1] = "";
        cout << "Task has been removed." << endl;
    }
    void DisplayTasks()
    {
        for (int i = 0; i < 12; i++)
        {
            for (int j = 0; j < 31; j++)
            {
                cout << tasks[i][j] << endl;
            }
        }
    }
};
int main()
{
    cout << "Enter the current year: ";
    int currentyear;
    cin >> currentyear;
    Calendar c1(currentyear);
    int choice, date, month;
    cout << "Select your function." << endl;
    cout << "1. Add tasks." << endl;
    cout << "2. Remove Tasks." << endl;
    cout << "3. Display Tasks." << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Enter date from 1-31: ";
        cin >> date;
        cout << endl
             << "Enter month from 1 to 12: " << endl;
        c1.AddTasks(date, month);
        break;
    case 2:
        cout << "Enter date from 1-31: ";
        cin >> date;
        cout << endl
             << "Enter month from 1 to 12: " << endl;
        c1.RemoveTask(date, month);
        break;
    case 3:
        c1.DisplayTasks();
    default:
        cout << "Wrong choice.";
    }
    return 0;
}

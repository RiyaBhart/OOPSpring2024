/*
NAME : RIYA
ID : 23K-0063
*/
#include <iostream>
#include <string>
using namespace std;

class WeekDays
{
private:
    string Days[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int CurrentDay;

public:

    WeekDays() : CurrentDay(0) {}

    
    WeekDays(int currentDay)
    {
        
        CurrentDay = (currentDay >= 0 && currentDay < 7) ? currentDay : 0;
    }

    string getCurrentDay()
    {
        return Days[CurrentDay];
    }

    string getNextDay()
    {
        return Days[(CurrentDay + 1) % 7];
    }

    string getPreviousDay()
    {
        return Days[(CurrentDay + 6) % 7];
    }

    string getNthDayFromToday(int n)
    {
        return Days[(CurrentDay + n) % 7];
    }
};

int main()
{
    WeekDays weeks;

    cout << "Current day: " << weeks.getCurrentDay() << endl;
    cout << "Next day: " << weeks.getNextDay() << endl;
    cout << "Previous day: " << weeks.getPreviousDay() << endl;
    cout << "Nth day: " << weeks.getNthDayFromToday(3) << endl;

    return 0;
}

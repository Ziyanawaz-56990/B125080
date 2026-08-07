#include <iostream>
using namespace std;

class Time
{
private:
    int hours;
    int minutes;

public:
    void input()
    {
        cout << "Enter Hours: ";
        cin >> hours;

        cout << "Enter Minutes: ";
        cin >> minutes;
    }

    void add(Time time1, Time time2)
    {
        hours = time1.hours + time2.hours;
        minutes = time1.minutes + time2.minutes;

        if (minutes >= 60)
        {
            hours = hours + minutes / 60;
            minutes = minutes % 60;
        }
    }

    void display()
    {
        cout << "\n----- Resulting Time -----" << endl;
        cout << "Time = " << hours << " Hours "
             << minutes << " Minutes" << endl;
    }
};

int main()
{
    Time time1, time2, result;

    cout << "Enter First Time:" << endl;
    time1.input();

    cout << "\nEnter Second Time:" << endl;
    time2.input();

    result.add(time1, time2);
    result.display();

    return 0;
}
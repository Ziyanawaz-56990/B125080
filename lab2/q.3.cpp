#include <iostream>
using namespace std;

class Temperature
{
private:
    float celsius;
    float fahrenheit;

public:
    void input()
    {
        cout << "Enter Temperature in Celsius: ";
        cin >> celsius;
    }

    void convert()
    {
        fahrenheit = (9.0 / 5.0) * celsius + 32;
    }

    void display()
    {
        cout << "\n----- Temperature Details -----" << endl;
        cout << "Celsius    : " << celsius << " C" << endl;
        cout << "Fahrenheit : " << fahrenheit << " F" << endl;
    }
};

int main()
{
    Temperature temperature;

    temperature.input();
    temperature.convert();
    temperature.display();

    return 0;
}
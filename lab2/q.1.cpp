#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
    string carNumber;
    string brandName;
    int modelYear;

public:
    // Member function to accept car details
    void input()
    {
        cout << "Enter Car Number: ";
        cin >> carNumber;

        cout << "Enter Brand Name: ";
        cin >> brandName;

        cout << "Enter Model Year: ";
        cin >> modelYear;
    }

    // Member function to display car details
    void display()
    {
        cout << "\n----- Car Details -----" << endl;
        cout << "Car Number : " << carNumber << endl;
        cout << "Brand Name : " << brandName << endl;
        cout << "Model Year : " << modelYear << endl;
    }
};

int main()
{
    // Creating an object of Car class
    Car car;

    // Calling member functions
    car.input();
    car.display();

    return 0;
}
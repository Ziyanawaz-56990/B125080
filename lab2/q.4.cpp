#include <iostream>
#include <string>
using namespace std;

class HotelRoom
{
private:
    int roomNumber;
    string guestName;
    int daysStayed;
    float costPerDay;
    float totalRent;

public:
    void input()
    {
        cout << "Enter Room Number: ";
        cin >> roomNumber;

        cout << "Enter Guest Name: ";
        cin >> guestName;

        cout << "Enter Number of Days Stayed: ";
        cin >> daysStayed;

        cout << "Enter Cost Per Day: ";
        cin >> costPerDay;
    }

    void calculateRent()
    {
        totalRent = daysStayed * costPerDay;
    }

    void display()
    {
        cout << "\n----- Hotel Booking Details -----" << endl;
        cout << "Room Number     : " << roomNumber << endl;
        cout << "Guest Name      : " << guestName << endl;
        cout << "Days Stayed     : " << daysStayed << endl;
        cout << "Cost Per Day    : " << costPerDay << endl;
        cout << "Total Room Rent : " << totalRent << endl;
    }
};

int main()
{
    HotelRoom room;

    room.input();
    room.calculateRent();
    room.display();

    return 0;
}
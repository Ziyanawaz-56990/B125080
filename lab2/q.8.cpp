#include <iostream>
#include <string>
using namespace std;

class HostelFee
{
private:
    string studentName;
    string hostelID;
    float monthlyFee;
    int numberOfMonths;
    float totalFee;
    float finalAmount;
    bool paymentDelayed;

public:
    void input()
    {
        cout << "Enter Student Name: ";
        cin >> studentName;

        cout << "Enter Hostel ID: ";
        cin >> hostelID;

        cout << "Enter Monthly Fee: ";
        cin >> monthlyFee;

        cout << "Enter Number of Months: ";
        cin >> numberOfMonths;

        cout << "Was Payment Delayed? (1 = Yes, 0 = No): ";
        cin >> paymentDelayed;
    }

    void calculateFee()
    {
        totalFee = monthlyFee * numberOfMonths;

        if (paymentDelayed)
        {
            finalAmount = totalFee + 500;
        }
        else
        {
            finalAmount = totalFee;
        }
    }

    void display()
    {
        cout << "\n----- Hostel Fee Details -----" << endl;
        cout << "Student Name : " << studentName << endl;
        cout << "Hostel ID    : " << hostelID << endl;
        cout << "Monthly Fee  : " << monthlyFee << endl;
        cout << "Months       : " << numberOfMonths << endl;
        cout << "Total Fee    : " << totalFee << endl;

        if (paymentDelayed)
        {
            cout << "Late Fine    : 500" << endl;
        }
        else
        {
            cout << "Late Fine    : 0" << endl;
        }

        cout << "Final Amount : " << finalAmount << endl;
    }
};

int main()
{
    HostelFee hostel;

    hostel.input();
    hostel.calculateFee();
    hostel.display();

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

class MobileRecharge
{
private:
    string mobileNumber;
    string customerName;
    float currentBalance;

public:
    void input()
    {
        cout << "Enter Mobile Number: ";
        cin >> mobileNumber;

        cout << "Enter Customer Name: ";
        cin >> customerName;

        cout << "Enter Current Balance: ";
        cin >> currentBalance;
    }

    void recharge()
    {
        float rechargeAmount;

        cout << "Enter Recharge Amount: ";
        cin >> rechargeAmount;

        currentBalance = currentBalance + rechargeAmount;

        cout << "Recharge Successful." << endl;
    }

    void deductBalance()
    {
        float planAmount;

        cout << "Enter Recharge Plan Amount: ";
        cin >> planAmount;

        if (planAmount <= currentBalance)
        {
            currentBalance = currentBalance - planAmount;
            cout << "Plan Amount Deducted Successfully." << endl;
        }
        else
        {
            cout << "Insufficient Balance." << endl;
        }
    }

    void display()
    {
        cout << "\n----- Mobile Recharge Details -----" << endl;
        cout << "Mobile Number   : " << mobileNumber << endl;
        cout << "Customer Name   : " << customerName << endl;
        cout << "Updated Balance : " << currentBalance << endl;
    }
};

int main()
{
    MobileRecharge mobile;

    mobile.input();
    mobile.recharge();
    mobile.deductBalance();
    mobile.display();

    return 0;
}
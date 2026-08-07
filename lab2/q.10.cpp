#include <iostream>
#include <string>
using namespace std;

class WaterBill
{
private:
    int consumerNumber;
    string consumerName;
    float waterConsumption;
    float totalBill;

public:
    void input()
    {
        cout << "Enter Consumer Number: ";
        cin >> consumerNumber;

        cout << "Enter Consumer Name: ";
        cin >> consumerName;

        cout << "Enter Water Consumption (in litres): ";
        cin >> waterConsumption;
    }

    void calculateBill()
    {
        if (waterConsumption <= 500)
        {
            totalBill = waterConsumption * 2;
        }
        else if (waterConsumption <= 1000)
        {
            totalBill = (500 * 2) +
                        ((waterConsumption - 500) * 3);
        }
        else
        {
            totalBill = (500 * 2) +
                        (500 * 3) +
                        ((waterConsumption - 1000) * 5);
        }
    }

    void display()
    {
        cout << "\n----- Water Bill -----" << endl;
        cout << "Consumer Number   : " << consumerNumber << endl;
        cout << "Consumer Name     : " << consumerName << endl;
        cout << "Water Consumption : " << waterConsumption << " litres" << endl;
        cout << "Total Water Bill  : " << totalBill << endl;
    }
};

int main()
{
    WaterBill bill;

    bill.input();
    bill.calculateBill();
    bill.display();

    return 0;
}
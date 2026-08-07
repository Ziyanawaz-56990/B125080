#include <iostream>
using namespace std;

class Square
{
private:
    float side;

public:
    void input()
    {
        cout << "Enter Side of Square: ";
        cin >> side;
    }

    float calculateArea()
    {
        return side * side;
    }

    float calculatePerimeter()
    {
        return 4 * side;
    }

    void display()
    {
        cout << "\n----- Square Details -----" << endl;
        cout << "Side      : " << side << endl;
        cout << "Area      : " << calculateArea() << endl;
        cout << "Perimeter : " << calculatePerimeter() << endl;
    }
};

int main()
{
    Square square;

    square.input();
    square.display();

    return 0;
}
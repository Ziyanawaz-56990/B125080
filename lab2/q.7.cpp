#include <iostream>
#include <string>
using namespace std;

class MovieTicket
{
private:
    string movieName;
    float ticketPrice;
    int numberOfTickets;
    float totalCost;

public:
    void input()
    {
        cout << "Enter Movie Name: ";
        cin >> movieName;

        cout << "Enter Ticket Price: ";
        cin >> ticketPrice;

        cout << "Enter Number of Tickets: ";
        cin >> numberOfTickets;
    }

    void calculateCost()
    {
        totalCost = ticketPrice * numberOfTickets;
    }

    void display()
    {
        cout << "\n----- Movie Ticket Booking -----" << endl;
        cout << "Movie Name        : " << movieName << endl;
        cout << "Ticket Price      : " << ticketPrice << endl;
        cout << "Number of Tickets : " << numberOfTickets << endl;
        cout << "Total Ticket Cost : " << totalCost << endl;
    }
};

int main()
{
    MovieTicket ticket;

    ticket.input();
    ticket.calculateCost();
    ticket.display();

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

class CricketPlayer
{
private:
    string playerName;
    int matchesPlayed;
    int totalRunsScored;
    float battingAverage;

public:
    void input()
    {
        cout << "Enter Player Name: ";
        cin >> playerName;

        cout << "Enter Matches Played: ";
        cin >> matchesPlayed;

        cout << "Enter Total Runs Scored: ";
        cin >> totalRunsScored;
    }

    void calculateAverage()
    {
        if (matchesPlayed > 0)
        {
            battingAverage = (float)totalRunsScored / matchesPlayed;
        }
        else
        {
            battingAverage = 0;
        }
    }

    void display()
    {
        cout << "\n----- Cricket Player Report -----" << endl;
        cout << "Player Name     : " << playerName << endl;
        cout << "Matches Played  : " << matchesPlayed << endl;
        cout << "Total Runs      : " << totalRunsScored << endl;
        cout << "Batting Average : " << battingAverage << endl;

        cout << "Performance     : ";

        if (battingAverage >= 50)
        {
            cout << "Excellent";
        }
        else if (battingAverage >= 35)
        {
            cout << "Good";
        }
        else if (battingAverage >= 20)
        {
            cout << "Average";
        }
        else
        {
            cout << "Poor";
        }

        cout << endl;
    }
};

int main()
{
    CricketPlayer player;

    player.input();
    player.calculateAverage();
    player.display();

    return 0;
}
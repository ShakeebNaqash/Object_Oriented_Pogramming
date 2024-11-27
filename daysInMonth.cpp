#include <iostream>
using namespace std;

int main()
{
    int month;
    cout << "Enter the month number (1-12): ";
    cin >> month;

    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "31 days in this month." << endl;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout << "30 days in this month." << endl;
        break;
    case 2:
        cout << "29 days in this month (Leap Year considered)." << endl;
        break;
    default:
        cout << "Invalid month!" << endl;
        break;
    }

    return 0;
}
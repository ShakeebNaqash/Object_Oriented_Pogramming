#include <iostream>
using namespace std;

int main()
{
    int year, count = 0, nextLeap;

    cout << "Enter a year: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        cout << year << " is a leap year." << endl;
    else
    {
        cout << year << " is not a leap year. Next 5 leap years are:" << endl;
        nextLeap = year + 1;
        while (count < 5)
        {
            if ((nextLeap % 4 == 0 && nextLeap % 100 != 0) || nextLeap % 400 == 0)
            {
                cout << nextLeap << endl;
                count++;
            }
            nextLeap++;
        }
    }

    return 0;
}

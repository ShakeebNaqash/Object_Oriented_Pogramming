#include <iostream>
using namespace std;

bool isLeapYear(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool isValidDate(int day, int month, int year)
{
    if (year < 1 || month < 1 || month > 12 || day < 1)
        return false;
    int daysInMonth[] = {31, isLeapYear(year) ? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return day <= daysInMonth[month - 1];
}

int dayOfWeek(int day, int month, int year)
{
    static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    if (month < 3)
        year -= 1;
    return (year + year / 4 - year / 100 + year / 400 + t[month - 1] + day) % 7;
}

int main()
{
    int day, month, year;
    cout << "Enter a date (DD-MM-YYYY): ";
    cin >> day >> month >> year;

    if (!isValidDate(day, month, year))
    {
        cout << "Invalid date!" << endl;
    }
    else
    {
        static string days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
        int dow = dayOfWeek(day, month, year);
        cout << "Valid date! The day of the week is: " << days[dow] << endl;
    }
    return 0;
}

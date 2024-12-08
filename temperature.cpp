#include <iostream>

using namespace std;

int main()
{
    int choice;
    float temperature, convertedTemperature;

    cout << "Type 1 to convert Fahrenheit to Celsius,\n";
    cout << "2 to convert Celsius to Fahrenheit: ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temperature;
        convertedTemperature = (temperature - 32) * 5 / 9;
        cout << "In Celsius that is " << convertedTemperature << endl;
    }
    else if (choice == 2)
    {
        cout << "Enter temperature in Celsius: ";
        cin >> temperature;
        convertedTemperature = (temperature * 9 / 5) + 32;
        cout << "In Fahrenheit that is " << convertedTemperature << endl;
    }
    else
    {
        cout << "Invalid choice. Please restart the program and choose 1 or 2." << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age < 12)
    {
        cout << "You are a child." << endl;
    }
    else
    {
        if (age >= 12 && age <= 18)
        {
            cout << "You are a teenager." << endl;
        }
        else
        {
            if (age > 18 && age <= 60)
            {
                cout << "You are an adult." << endl;
            }
            else
            {
                cout << "You are a senior." << endl;
            }
        }
    }

    return 0;
}
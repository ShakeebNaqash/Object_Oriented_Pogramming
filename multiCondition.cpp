#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    char op;

    cout << "Enter first integer: ";
    cin >> num1;

    cout << "Enter second integer: ";
    cin >> num2;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    if (op == '+')
    {
        cout << "Result: " << num1 + num2 << endl;
    }
    else if (op == '-')
    {
        cout << "Result: " << num1 - num2 << endl;
    }
    else if (op == '*')
    {
        cout << "Result: " << num1 * num2 << endl;
    }
    else if (op == '/')
    {
        if (num2 != 0)
        {
            cout << "Result: " << num1 / num2 << endl;
        }
        else
        {
            cout << "Error: Division by zero!" << endl;
        }
    }
    else
    {
        cout << "Invalid operator!" << endl;
    }

    return 0;
}
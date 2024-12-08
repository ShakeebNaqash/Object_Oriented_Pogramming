#include <iostream>

using namespace std;

int main()
{
    float num1, num2, result;
    char op, choice;

    do5
    {
        cout << "Enter first number, operator, second number: ";
        cin >> num1 >> op >> num2;

        switch (op)
        {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0)
            {
                result = num1 / num2;
            }
            else
            {
                cout << "Error: Division by zero is not allowed.\n";
                continue;
            }
            break;
        default:
            cout << "Invalid operator. Please use +, -, *, or /.\n";
            continue;
        }

        cout << "Answer = " << result << endl;

        cout << "Do another (y/n)? ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Goodbye!\n";
    return 0;
}

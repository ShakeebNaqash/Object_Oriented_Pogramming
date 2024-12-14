#include <iostream>
using namespace std;

int main()
{
    float a, b, result;
    char op;
    cout << "Enter two numbers and an operator (+, -, *, /, %): ";
    cin >> a >> b >> op;

    result = (op == '+') ? (a + b) : (op == '-')                           ? (a - b)
                                 : (op == '*')                             ? (a * b)
                                 : (op == '/' && b != 0)                   ? (a / b)
                                 : (op == '%' && static_cast<int>(b) != 0) ? (static_cast<int>(a) % static_cast<int>(b))
                                                                           : 0;

    if ((op == '/' && b == 0) || (op == '%' && static_cast<int>(b) == 0))
        cout << "Error: Division by zero." << endl;
    else if (result == 0 && op != '+')
        cout << "Error: Invalid operator." << endl;
    else
        cout << "Result: " << result << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0, product = 1, digit;

    cout << "Enter an integer: ";
    cin >> num;

    int original = num;
    while (num > 0)
    {
        digit = num % 10;
        sum += digit;
        product *= digit;
        num /= 10;
    }

    cout << "Sum of digits of " << original << " = " << sum << endl;
    cout << "Product of digits of " << original << " = " << product << endl;
    return 0;
}
#include <iostream>
using namespace std;

void callByValue(int a)
{
    a = a + 10;
    cout << "Inside callByValue function, a = " << a << endl;
}

void callByReference(int &b)
{
    b = b + 10;
    cout << "Inside callByReference function, b = " << b << endl;
}

int main()
{
    int x = 20, y = 30;

    cout << "Before callByValue, x = " << x << endl;
    callByValue(x);
    cout << "After callByValue, x = " << x << endl;

    cout << "\nBefore callByReference, y = " << y << endl;
    callByReference(y);
    cout << "After callByReference, y = " << y << endl;

    return 0;
}

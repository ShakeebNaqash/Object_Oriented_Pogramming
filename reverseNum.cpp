#include <iostream>

using namespace std;

int main()
{
    int n, on, rem;
    cout << "Enter a number: ";
    cin >> n;
    on = n;
    while (n != 0)
    {
        rem = n % 10;
        n /= 10;
        cout << rem;
    }
    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    int n, len;
    cout << "Enter a number: ";
    cin >> n;
    while (n != 0)
    {
        n /= 10;
        len++;
    }
    cout << "The length of the entered number is: " << len;
    return 0;
}
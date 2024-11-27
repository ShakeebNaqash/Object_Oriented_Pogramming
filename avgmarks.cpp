#include <iostream>

using namespace std;

int main()
{
    int marks[6], avg = 0, i;
    for (i = 0; i < 6; i++)
    {
        cout << "Enter marks for Subject " << i + 1 << ": ";
        cin >> marks[i];
        avg += marks[i];
    }
    avg /= 6;
    cout << "Average marks: " << avg;
    return 0;
}
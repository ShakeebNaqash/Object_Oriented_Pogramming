#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter a number to generate its multiplication table: ";
    cin >> num;

    cout << "\nMultiplication Table of " << num << ":\n\n";

    for (int i = 1; i <= 30; ++i)
    {
        
        cout << num * i;
        if ((num * i) < 10)
            cout << "    "; 
        else if ((num * i) < 100)
            cout << "   "; 
        else if ((num * i) < 1000)
            cout << "  "; 
        else
            cout << " "; 

        if (i % 10 == 0)
        {
            cout << "\n"; 
        }
    }

    return 0;
}
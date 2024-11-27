#include <iostream>

using namespace std;

int main()
{
    char ch;
    cout << "Enter a alphabet: ";
    cin >> ch;
    ch = tolower(ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        cout << "Entered character is a vowel.";
    }
    else
    {
        cout << "Entered character is a not a vowel.";
    }
    return 0;
}
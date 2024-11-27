#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    switch (tolower(ch))
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout << "The character is a vowel." << endl;
        break;
    default:
        cout << "The character is a consonant." << endl;
        break;
    }

    return 0;
}
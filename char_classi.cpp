#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        cout << "Vowel" << endl;
        break;
    default:
        if (isalpha(ch))
            cout << "Consonant" << endl;
        else if (isdigit(ch))
            cout << "Digit" << endl;
        else
            cout << "Special Character" << endl;
    }

    return 0;
}

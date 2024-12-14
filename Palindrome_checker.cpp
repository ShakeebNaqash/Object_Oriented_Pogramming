#include <iostream>
using namespace std;

bool isPalindrome(int num)
{
    int original = num, reversed = 0;
    while (num > 0)
    {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }
    return original == reversed;
}

void printPalindromesInRange(int start, int end)
{
    cout << "Palindromes in range: ";
    for (int i = start; i <= end; i++)
    {
        if (isPalindrome(i))
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{
    int num, start, end;
    cout << "Enter a number to check for palindrome: ";
    cin >> num;

    if (isPalindrome(num))
        cout << num << " is a palindrome." << endl;
    else
        cout << num << " is not a palindrome." << endl;

    cout << "Enter a range (start and end): ";
    cin >> start >> end;
    printPalindromesInRange(start, end);

    return 0;
}

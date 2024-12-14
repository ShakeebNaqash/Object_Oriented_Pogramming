#include <iostream>
using namespace std;

int main()
{
    int marks[5], total = 0, failed = 0;
    float percentage;
    char grade;

    cout << "Enter marks for 5 subjects: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> marks[i];
        total += marks[i];
        if (marks[i] < 40)
            failed++;
    }

    percentage = total / 5.0;

    if (failed > 1)
    {
        cout << "Repeat Year" << endl;
    }
    else
    {
        if (percentage >= 90)
            grade = 'A';
        else if (percentage >= 80)
            grade = 'B';
        else if (percentage >= 70)
            grade = 'C';
        else if (percentage >= 60)
            grade = 'D';
        else
            grade = 'F';

        cout << "Grade: " << grade << endl;
    }
    return 0;
}

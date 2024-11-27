#include <iostream>
using namespace std;

int main()
{
    int choice, dishChoice;

    cout << "Choose a menu (1 for Vegetarian, 2 for Non-Vegetarian): ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Choose a vegetarian dish:\n";
        cout << "1. Salad\n2. Soup\n3. Pasta\n";
        cin >> dishChoice;
        switch (dishChoice)
        {
        case 1:
            cout << "You chose Salad!" << endl;
            break;
        case 2:
            cout << "You chose Soup!" << endl;
            break;
        case 3:
            cout << "You chose Pasta!" << endl;
            break;
        default:
            cout << "Invalid dish choice!" << endl;
            break;
        }
        break;

    case 2:
        cout << "Choose a non-vegetarian dish:\n";
        cout << "1. Chicken\n2. Fish\n3. Beef\n";
        cin >> dishChoice;
        switch (dishChoice)
        {
        case 1:
            cout << "You chose Chicken!" << endl;
            break;
        case 2:
            cout << "You chose Fish!" << endl;
            break;
        case 3:
            cout << "You chose Beef!" << endl;
            break;
        default:
            cout << "Invalid dish choice!" << endl;
            break;
        }
        break;

    default:
        cout << "Invalid menu choice!" << endl;
        break;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    float balance = 0.0;
    int choice;
    float amount;

    do
    {
        cout << "\n1. Deposit\n2. Withdraw\n3. Balance Inquiry\n4. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter amount to deposit: ";
            cin >> amount;
            if (amount > 0)
            {
                balance += amount;
                cout << "Deposit successful! Current balance: Rs " << balance << endl;
            }
            else
            {
                cout << "Invalid amount!" << endl;
            }
            break;
        case 2:
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            if (amount > 0 && amount <= balance)
            {
                balance -= amount;
                cout << "Withdrawal successful! Current balance: Rs " << balance << endl;
            }
            else
            {
                cout << "Invalid amount or insufficient balance!" << endl;
            }
            break;
        case 3:
            cout << "Current balance: Rs " << balance << endl;
            break;
        case 4:
            cout << "Exiting the program. Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 4);

    return 0;
}

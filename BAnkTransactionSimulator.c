//Bank TRansaction Simulator Program 

#include <stdio.h>

struct customer
{
    int account_number;
    int balance;
};

void chkbal(struct customer *cust)
{
    printf("Your account balance is: %d\n", cust->balance);
}

void deposit(struct customer *cust, int amount)
{
    cust->balance += amount;
    printf("Deposited %d. New balance is: %d\n", amount, cust->balance);
}

void withdraw(struct customer *cust, int amount)
{
    if (amount > cust->balance)
    {
        printf("Insufficient balance.\n");
    }
    else
    {
        cust->balance -= amount;
        printf("Withdrew %d. New balance is: %d\n", amount, cust->balance);
    }
}

struct customer *find_customer(struct customer customers[], int accountNumber, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (customers[i].account_number == accountNumber)
            return &customers[i];
    }
    return NULL;  
}

int main()
{
    struct customer customers[5];
    
    for (int i = 0; i < 5; i++) 
    {
        customers[i].account_number = 6562120 + i;
        customers[i].balance = 1000 + i * 100;  
    }

    do{
        int accountNumber;
        printf("Enter account number of user: ");
        scanf("%d", &accountNumber);

        struct customer *cust = find_customer(customers, accountNumber, 5);
        
        if (cust == NULL)
        {
            printf("Account not found.\n");
            continue;
        }

        int option;
        printf("Enter 1 to check balance, 2 to deposit money, 3 to withdraw money: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            chkbal(cust);
            break;
        case 2:
            {
                int amount;
                printf("Enter amount to deposit: ");
                scanf("%d", &amount);
                deposit(cust, amount);
            }
            break;
        case 3:
            {
                int amount;
                printf("Enter amount to withdraw: ");
                scanf("%d", &amount);
                withdraw(cust, amount);
            }
            break;
        default:
            printf("Invalid option.\n");
            break;
        }
    }while(1);
    
    return 0;
}

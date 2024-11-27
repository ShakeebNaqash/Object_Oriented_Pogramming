#include <iostream>


unsigned long long factorial(int n)
{
    if (n < 0)
        return 0; 
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i)
    {
        result *= i;
    }
    return result;
}


int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    int choice;

    do
    {
        
        std::cout << "Menu:\n";
        std::cout << "1. Find the factorial of a number\n";
        std::cout << "2. Find the GCD of two numbers\n";
        std::cout << "3. Find the LCM of two numbers\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice (1-4): ";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int n;
            std::cout << "Enter a non-negative integer: ";
            std::cin >> n;
            std::cout << "Factorial of " << n << " is " << factorial(n) << std::endl;
            break;
        }
        case 2:
        {
            int a, b;
            std::cout << "Enter two integers: ";
            std::cin >> a >> b;
            std::cout << "GCD of " << a << " and " << b << " is " << gcd(a, b) << std::endl;
            break;
        }
        case 3:
        {
            int a, b;
            std::cout << "Enter two integers: ";
            std::cin >> a >> b;
            std::cout << "LCM of " << a << " and " << b << " is " << lcm(a, b) << std::endl;
            break;
        }
        case 4:
            std::cout << "Exiting the program." << std::endl;
            break;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
            break;
        }

        std::cout << std::endl; 

    } while (choice != 4);

    return 0;
}
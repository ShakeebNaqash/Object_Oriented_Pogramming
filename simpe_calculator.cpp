#include <iostream>
#include <limits>

// Function declarations
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
double modulus(int a, int b);

int main()
{
    double num1, num2;
    char operation;

    // Input first number
    std::cout << "Enter the first number: ";
    while (true)
    {
        std::cin >> num1;
        if (std::cin.fail())
        {
            std::cin.clear();                                                   // Clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
            std::cout << "Invalid input. Please enter a valid number: ";
        }
        else
        {
            break; // Valid input
        }
    }

    // Input second number
    std::cout << "Enter the second number: ";
    while (true)
    {
        std::cin >> num2;
        if (std::cin.fail())
        {
            std::cin.clear();                                                   // Clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
            std::cout << "Invalid input. Please enter a valid number: ";
        }
        else
        {
            break; // Valid input
        }
    }

    // Input operation
    std::cout << "Enter an operation (+, -, *, /, %): ";
    std::cin >> operation;

    // Perform operation using switch statement
    switch (operation)
    {
    case '+':
        std::cout << "Result: " << add(num1, num2) << std::endl;
        break;
    case '-':
        std::cout << "Result: " << subtract(num1, num2) << std::endl;
        break;
    case '*':
        std::cout << "Result: " << multiply(num1, num2) << std::endl;
        break;
    case '/':
        if (num2 != 0)
        {
            std::cout << "Result: " << divide(num1, num2) << std::endl;
        }
        else
        {
            std::cout << "Error: Division by zero is not allowed." << std::endl;
        }
        break;
    case '%':
        if (static_cast<int>(num2) != 0)
        {
            std::cout << "Result: " << modulus(static_cast<int>(num1), static_cast<int>(num2)) << std::endl;
        }
        else
        {
            std::cout << "Error: Division by zero is not allowed." << std::endl;
        }
        break;
    default:
        std::cout << "Error: Invalid operation." << std::endl;
        break;
    }

    return 0;
}

// Function definitions
double add(double a, double b)
{
    return a + b;
}

double subtract(double a, double b)
{
    return a - b;
}

double multiply(double a, double b)
{
    return a * b;
}

double divide(double a, double b)
{
    return a / b;
}

double modulus(int a, int b)
{
    return a % b;
}
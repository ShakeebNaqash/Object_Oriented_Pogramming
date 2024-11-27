#include <iostream>
#include <limits>

int main()
{
    double income, tax = 0.0;

    // Prompt the user for annual income
    std::cout << "Enter your annual income (in ₹): ";

    while (true)
    {
        std::cin >> income;

        // Check if the input is valid
        if (std::cin.fail())
        {
            std::cin.clear();                                                   // Clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
            std::cout << "Invalid input. Please enter a valid number for your annual income: ";
        }
        else if (income < 0)
        {
            std::cout << "Please enter a positive income amount: ";
        }
        else
        {
            break; // Valid input, exit the loop
        }
    }

    // Calculate tax based on income slabs
    if (income <= 250000)
    {
        tax = 0; // No tax
    }
    else if (income <= 500000)
    {
        tax = (income - 250000) * 0.05; // 5% tax for income between ₹2,50,001 and ₹5,00,000
    }
    else if (income <= 1000000)
    {
        tax = (250000 * 0.05) + (income - 500000) * 0.20; // 20% tax for income between ₹5,00,001 and ₹10,00,000
    }
    else
    {
        tax = (250000 * 0.05) + (500000 * 0.20) + (income - 1000000) * 0.30; // 30% tax for income above ₹10,00,000
    }

    // Output the calculated tax amount
    std::cout << "Your income tax amount is: ₹" << tax << std::endl;

    return 0;
}
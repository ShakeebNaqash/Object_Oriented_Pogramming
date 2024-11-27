#include <iostream>
#include <limits>

bool isLeapYear(int year)
{
    // Check if the year is a leap year
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                return true; // Divisible by 400
            }
            else
            {
                return false; // Divisible by 100 but not by 400
            }
        }
        else
        {
            return true; // Divisible by 4 but not by 100
        }
    }
    else
    {
        return false; // Not divisible by 4
    }
}

int main()
{
    int year;

    std::cout << "Enter a year: ";
    while (true)
    {
        std::cin >> year;

        // Check if the input is valid
        if (std::cin.fail())
        {
            std::cin.clear();                                                   // Clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
            std::cout << "Invalid input. Please enter a valid integer for the year: ";
        }
        else if (year < 0)
        {
            std::cout << "Please enter a positive year: ";
        }
        else
        {
            break; // Valid input, exit the loop
        }
    }

    // Check if the year is a leap year and print the result
    if (isLeapYear(year))
    {
        std::cout << year << " is a leap year." << std::endl;
    }
    else
    {
        std::cout << year << " is not a leap year." << std::endl;
    }

    return 0;
}
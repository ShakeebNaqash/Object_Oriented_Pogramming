#include <iostream>

int main()
{
    int num, reversed = 0;

    do
    {
        std::cout << "Enter a positive integer (0 to exit): ";
        std::cin >> num;

        if (num == 0)
        {
            break; // Exit the loop when 0 is entered
        }

        if (num < 0)
        {
            std::cout << "Error: Please enter a positive integer." << std::endl;
            continue; // Skip to the next iteration
        }

        int original = num; // Store the original number
        reversed = 0;

        // Reverse the digits of the number
        while (num != 0)
        {
            int digit = num % 10;
            reversed = reversed * 10 + digit;
            num /= 10;
        }

        std::cout << "Reversed number: " << reversed << std::endl;
        std::cout << "Original number: " << original << std::endl;
        std::cout << std::endl; // Empty line for better output formatting

    } while (true); // Loop indefinitely until 0 is entered

    return 0;
}
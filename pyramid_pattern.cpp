#include <iostream>

int main()
{
    int n;

    // Prompt the user for the number of rows
    std::cout << "Enter the number of rows for the pyramid pattern: ";
    std::cin >> n;

    // Generate the pyramid pattern
    for (int i = 1; i <= n; ++i)
    { // Loop for each row
        // Print spaces for alignment
        for (int j = i; j < n; ++j)
        {
            std::cout << " "; // Print leading spaces
        }

        // Print numbers from 1 to i
        for (int j = 1; j <= i; ++j)
        {
            std::cout << j << " "; // Print numbers with a space
        }

        // Move to the next line after each row
        std::cout << std::endl;
    }

    return 0;
}
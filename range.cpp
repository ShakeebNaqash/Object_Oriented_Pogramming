#include <iostream>
#include <cmath>

int main()
{
    int n;

    // Prompt the user for input
    std::cout << "Enter a positive integer n: ";
    std::cin >> n;

    // Calculate the upper limit for x and y
    int limit = static_cast<int>(sqrt(n));

    // Loop through all possible values of x
    for (int x = 0; x <= limit; ++x)
    {
        // Loop through all possible values of y
        for (int y = 0; y <= limit; ++y)
        {
            // Check if the condition x^2 + y^2 = n is met
            if (x * x + y * y == n)
            {
                std::cout << "(" << x << ", " << y << ")" << std::endl;
            }

            // If y^2 exceeds n - x^2, no need to check further values of y
            if (y * y > n - x * x)
            {
                break; // Break the inner loop
            }
        }
    }

    return 0;
}
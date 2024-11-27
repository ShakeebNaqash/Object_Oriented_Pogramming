#include <iostream>

// Function to check if a number is prime
bool isPrime(int num)
{
    if (num <= 1)
    {
        return false; // 0 and 1 are not prime numbers
    }
    for (int i = 2; i * i <= num; ++i)
    { // Check for factors up to the square root of num
        if (num % i == 0)
        {
            return false; // Found a factor, not prime
        }
    }
    return true; // No factors found, it's prime
}

int main()
{
    int n;

    // Prompt the user for input
    std::cout << "Enter a number (n) to find all prime numbers less than or equal to n: ";
    std::cin >> n;

    int current = 2; // Start checking for prime numbers from 2

    std::cout << "Prime numbers less than or equal to " << n << " are: ";

    // Use a while loop to find all prime numbers less than or equal to n
    while (current <= n)
    {
        if (isPrime(current))
        {
            std::cout << current << " "; // Print the prime number
        }
        current++; // Move to the next number
    }

    std::cout << std::endl; // New line for better output formatting

    return 0;
}
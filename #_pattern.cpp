#include <iostream>

int main()
{
    int n;

    std::cout << "Enter the size of the checkerboard (n x n): ";
    std::cin >> n;

    
    for (int i = 0; i < n; ++i)
    { 
        for (int j = 0; j < n; ++j)
        { 
            if ((i + j) % 2 == 0)
            {
                std::cout << "# "; 
            }
            else
            {
                std::cout << "  "; 
            }
        }
        std::cout << std::endl; 
    }

    return 0;
}
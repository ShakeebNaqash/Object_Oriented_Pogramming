#include <iostream>
#include <vector>

void findSubsetsWithSum(const std::vector<int> &arr, int target, std::vector<int> &current, int index)
{
    // Base case: if the target is reached, print the current subset
    if (target == 0)
    {
        std::cout << "[";
        for (size_t i = 0; i < current.size(); ++i)
        {
            std::cout << current[i];
            if (i < current.size() - 1)
            {
                std::cout << ", ";
            }
        }
        std::cout << "]" << std::endl;
        return;
    }

    // If the target becomes negative or we run out of elements, return
    if (target < 0 || index >= arr.size())
    {
        return;
    }

    // Include the current element in the subset
    current.push_back(arr[index]);
    findSubsetsWithSum(arr, target - arr[index], current, index + 1);

    // Exclude the current element from the subset and move to the next
    current.pop_back();
    findSubsetsWithSum(arr, target, current, index + 1);
}

int main()
{
    std::vector<int> arr;
    int n, target;

    // Input the size of the array
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    // Input the elements of the array
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i)
    {
        int value;
        std::cin >> value;
        arr.push_back(value);
    }

    // Input the target sum
    std::cout << "Enter the target sum: ";
    std::cin >> target;

    std::cout << "Subsets that sum to " << target << " are:\n";
    std::vector<int> current;
    findSubsetsWithSum(arr, target, current, 0);

    return 0;
}
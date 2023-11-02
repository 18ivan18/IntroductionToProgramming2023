#include <iostream>
#include <cassert>
#include <climits>
#include <iomanip>

int main()
{
    const int MAX_SIZE = 20;
    int arr[MAX_SIZE];
    int n;
    std::cin >> n;
    assert(n > 0 && n < MAX_SIZE);
    for (size_t i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    // Input: nums = [2,7,11,15], target = 9
    // Output: [0,1]
    // Output: Because nums[0] + nums[1] == 9, we return [0, 1].
    int target;
    std::cin >> target;

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                std::cout << i << " " << j << std::endl;
                break;
            }
        }
    }
}
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
    assert(n > 0 && n <= MAX_SIZE);
    for (size_t i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    bool increasing = true, decreasing = true;
    for (size_t i = 0; i < n; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            decreasing = false;
        }

        if (arr[i] > arr[i + 1])
        {
            increasing = false;
        }
    }

    if (increasing && decreasing)
    {
        std::cout << "The sequence contains only equal elements." << std::endl;
    }
    else if (increasing)
    {
        std::cout << "The sequence is increasing." << std::endl;
    }
    else if (decreasing)
    {
        std::cout << "The sequence is decreasing." << std::endl;
    }
    else
    {
        std::cout << "The sequence is neither increasing nor decreasing." << std::endl;
    }
}
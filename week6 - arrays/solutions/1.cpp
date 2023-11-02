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

    // [1, 7, 3, 6, 9, 0]
    // INT_MIN -> 1 -> 7 -> 7 -> 7 -> 9
    int biggest = arr[0];
    for (size_t i = 1; i < n; i++)
    {
        if (biggest < arr[i])
        {
            biggest = arr[i];
        }
    }

    std::setw(10);
    for (size_t i = 0; i < 10; i++)
    {
        std::cout << " ";
    }
}
#include <iostream>
#include <cassert>
#include <climits>
#include <iomanip>

int main()
{
    const int MAX_SIZE = 20;
    int arr[MAX_SIZE], n;
    std::cin >> n;
    assert(n > 0 && n <= MAX_SIZE);
    for (size_t i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    // int biggest = arr[0];
    // for (size_t i = 1; i < n; i++)
    // {
    //     if (biggest < arr[i])
    //     {
    //         biggest = arr[i];
    //     }
    // }
    // std::cout << biggest << std::endl;

    int k;
    std::cin >> k;

    assert(k <= n);
    // // we do k * n operations
    // for (size_t i = 0; i < k; i++)
    // {
    //     int biggestIndex = 0;
    //     for (size_t i = 1; i < n; i++)
    //     {
    //         if (arr[biggestIndex] < arr[i])
    //         {
    //             biggestIndex = i;
    //         }
    //     }
    //     std::cout << arr[biggestIndex] << " ";
    //     arr[biggestIndex] = INT_MIN;
    // }
    // std::cout << std::endl;

    // std::cout << "Index of biggest element: " << biggestIndex << " Biggest element: " << arr[biggestIndex] << std::endl;

    // int first, second, third;
    // first = second = third = INT_MIN;

    // for (size_t i = 0; i < n; i++)
    // {
    //     if (arr[i] > first)
    //     {
    //         third = second;
    //         second = first;
    //         first = arr[i];
    //     }
    //     else if (arr[i] > second)
    //     {
    //         third = second;
    //         second = arr[i];
    //     }
    //     else if (arr[i] > third)
    //     {
    //         third = arr[i];
    //     }
    // }
    // std::cout << "The three largest elements are: " << first << ", " << second << ", " << third << std::endl;

    // SORT:
    // bubble sort
    bool swapped;
    for (size_t i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (size_t j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }

        std::cout << "Step: " << i + 1 << std::endl;

        for (size_t i = 0; i < n; i++)
        {
            std::cout << arr[i] << " ";
        }

        std::cout << std::endl;

        if (!swapped)
        {
            break;
        }
    }

    // n = 6
    // 1 7 3 6 9 0
    // sort:
    // steps:
    // 1 < 7 - no swap
    // 7 > 3 - swap -> 1 3 7 6 9 0
    // 7 > 6 - swap -> 1 3 6 7 9 0
    // 7 < 9 - no swap
    // 9 > 0 - swap -> 1 3 6 7 0 | 9
    // 1 3 0 | 6 | 7 | 9
    // 0 1 3 6 7 9
    //              indices
    // 0 1 2 3 4 5
    for (size_t i = 0; i < k; i++)
    {
        std::cout << arr[n - 1 - i] << " ";
    }
}
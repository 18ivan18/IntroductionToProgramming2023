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
    // int rev[MAX_SIZE];
    bool sym = true;
    // for (size_t i = n - 1; i >= 0; i--)
    // {
    //     rev[n - 1 - i] = arr[i];
    // }
    // for (size_t i = 0; i < n; i++)
    // {
    //     rev[i] = arr[n - 1 - i];
    // }

    // for (size_t i = 0; i < n; i++)
    // {
    //     if (arr[i] != rev[i])
    //     {
    //         sym = false;
    //         break;
    //     }
    // }

    // Input: n = 7, [1, 2, 3, | 4, 3, 2, 1]
    // Output: true
    // Input: n = 6, [1, 2, 3, | 3, 2, 1]
    // Output: true
    for (size_t i = 0; i < n / 2; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            sym = false;
            break;
        }
    }

    std::cout << std::boolalpha << sym << std::endl;
}
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
    // value k
    int m, k;
    std::cin >> m >> k;
    assert(k >= 0 && k <= n);

    // Input: n = 7, [1, 2, 3, 5, 4, 3, 4, 3, xx, xx, xx, xx, xx], m = 5, k = 3
    //                ^
    //                |  |
    //                0  1  2  3  4  5  6  7 ... 19
    // Output: [1, 2, 3, 5, 4, 3, 4, 3]
    for (size_t i = n; i > k; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[k] = m;
    n++;

    for (size_t i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
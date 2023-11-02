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
    // value k
    int k;
    std::cin >> k;

    // n = 7, [1, 2, 3, 4, 3, 4, 3], k = 3
    // step 1:
    // i = 0, arr[0] = 1, n = 7
    // 1 != 3
    // step 2:
    // i = 1, arr[1] = 2, n = 7
    // 2 != 3
    // step 3:
    // i = 2, arr[2] = 3, n = 7
    // 3 == 3
    // arr = [1, 2, 4, 3, 4, 3], n = 6, i = 1
    // i = 2, arr[2] = 4

    for (size_t i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            for (size_t j = i; j < n - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            n--;
            i--;
        }
    }

    for (size_t i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
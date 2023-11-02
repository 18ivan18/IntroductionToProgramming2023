#include <iostream>

int main()
{
    int arr[] = {5, 6, 7, 5, 6, 6, 7, 5, 6}, size = sizeof(arr) / sizeof(arr[0]);
    int result = 0;
    for (size_t i = 0; i < size; i++)
    {
        result ^= arr[i];
    }

    std::cout << result << std::endl;
}
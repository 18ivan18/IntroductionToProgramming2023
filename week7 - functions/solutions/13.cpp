#include <iostream>

void getNextRotation(int *arr, int size)
{
    int lastValue = arr[size - 1];
    for (int i = size - 1; i >= 1; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = lastValue;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7}, size = sizeof(arr) / sizeof(arr[0]), k = 3;
    for (size_t i = 0; i < k; i++)
    {
        getNextRotation(arr, size);
    }
    for (size_t i = 0; i < size; i++)
    {
        std::cout << arr[i] << ' ';
    }
}
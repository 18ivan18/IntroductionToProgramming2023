#include <iostream>

void swap(...)
{
}

void reverse(int *arr, int size)
{
    for (size_t i = 0; i < size / 2; i++)
    {
        swap(arr[i], arr[size - i - 1]);
    }
}

void printArray(int *arr, int size)
{
    for (size_t i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4}, n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);
    reverse(arr, n);
    printArray(arr, n);
}
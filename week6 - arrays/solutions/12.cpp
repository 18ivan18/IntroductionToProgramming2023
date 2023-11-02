#include <iostream>

int main()
{
    int arr[] = {5, 7, 8, 8, 5, 8, 7, 7}, size = sizeof(arr) / sizeof(arr[0]), target = 7, counter = 0;
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            counter++;
        }
    }

    std::cout << counter << std::endl;
}
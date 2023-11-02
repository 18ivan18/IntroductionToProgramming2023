#include <iostream>

int main()
{
    int arr[] = {1, 5, 7, 5, 8, 9, 11, 11, 2, 5, 6}, size = sizeof(arr) / sizeof(arr[0]);
    bool found;
    for (size_t i = 0; i < size; i++)
    {
        found = false;
        for (size_t j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                found = true;
                break;
            }
        }
        if (!found)
        {
            std::cout << arr[i] << " ";
        }
    }
    std::cout << std::endl;
}
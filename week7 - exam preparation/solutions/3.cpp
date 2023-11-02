#include <iostream>

int patternMatchingIndex(char *arr1, int size1, char *arr2, int size2)
{
    for (int i = 0; i <= size1 - size2; i++)
    {
        int j;
        for (j = 0; j < size2; j++)
        {
            if (arr1[i + j] != arr2[j])
            {
                break;
            }
        }
        if (j == size2)
        {
            return i;
        }
    }
    return -1;
}

void getNextRotation(char *arr, int size)
{
    char lastChar = arr[size - 1];
    for (size_t i = size - 1; i >= 1; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = lastChar;
}

int main()
{
    char firstArr[] = {'h', 'e', 'l', 'l', 'o'};
    char secondArr[] = {'l', 'o', 'l'};
    int size1 = sizeof(firstArr) / sizeof(firstArr[0]);
    int size2 = sizeof(secondArr) / sizeof(secondArr[0]);

    for (size_t i = 0; i < size2; i++)
    {
        getNextRotation(secondArr, size2);
        int match = patternMatchingIndex(firstArr, size1, secondArr, size2);
        if (match != -1)
        {
            std::cout << "Rotation \"";
            for (size_t i = 0; i < size2; i++)
            {
                std::cout << secondArr[i];
            }
            std::cout << "\" found after deleting " << match << " characters from the start and " << size1 - match - size2 << " characters from the end\n";
            break;
        }
    }
}
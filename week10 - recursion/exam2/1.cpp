#include <iostream>

void findDiagonalOrder(int *result, int **dArr, int *dArrLengths, int size)
{
    int maxLen = 0;
    for (int i = 0; i < size; i++)
    {
        if (maxLen < dArrLengths[i])
        {
            maxLen = dArrLengths[i];
        }
    }

    int resultIndex = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < maxLen; j++)
        {
            if (i - j < 0)
            {
                break;
            }
            if (j < dArrLengths[i - j])
            {
                result[resultIndex++] = dArr[i - j][j];
            }
        }
    }

    int i = size - 1;
    for (int j = 1; j < maxLen; j++)
    {
        for (int k = 0; k < maxLen; k++)
        {
            if (i - k >= 0 && j + k < dArrLengths[i - k])
            {
                result[resultIndex++] = dArr[i - k][j + k];
            }
        }
    }
}

int main()
{
    // int arr1[] = {1, 2, 3, 4, 5},
    //     arr2[] = {6, 7}, arr3[] = {8}, arr4[] = {9, 10, 11}, arr5[] = {12, 13, 14, 15, 16};
    // int *dArr[] = {arr1, arr2, arr3, arr4, arr5}, dArrLengths[] = {5, 2, 1, 3, 5}, size = sizeof(dArrLengths) / sizeof(dArrLengths[0]);
    // const int totalItems = 5 + 2 + 1 + 3 + 5;
    // int result[totalItems] = {0};

    int dArrSize = 0;
    std::cin >> dArrSize;
    int **dArr = new int *[dArrSize];
    int *dArrElSizes = new int[dArrSize];
    int totalItems = 0;
    for (size_t i = 0; i < dArrSize; i++)
    {
        int cols = 0;
        std::cin >> cols;
        dArrElSizes[i] = cols;
        dArr[i] = new int[cols];
        totalItems += cols;
        for (size_t j = 0; j < cols; j++)
        {
            std::cin >> dArr[i][j];
        }
    }
    int *result = new int[totalItems];

    findDiagonalOrder(result, dArr, dArrElSizes, dArrSize);
    for (size_t i = 0; i < totalItems; i++)
    {
        std::cout << result[i] << ' ';
    }
}
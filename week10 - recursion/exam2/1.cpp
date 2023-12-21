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
    int arr1[] = {1, 2, 3, 4, 5},
        arr2[] = {6, 7}, arr3[] = {8}, arr4[] = {9, 10, 11}, arr5[] = {12, 13, 14, 15, 16};
    int *dArr[] = {arr1, arr2, arr3, arr4, arr5}, dArrLengths[] = {5, 2, 1, 3, 5}, size = sizeof(dArrLengths) / sizeof(dArrLengths[0]);
    const int TOTAL_ITEMS = 5 + 2 + 1 + 3 + 5;
    int result[TOTAL_ITEMS] = {0};
    findDiagonalOrder(result, dArr, dArrLengths, size);
    for (size_t i = 0; i < TOTAL_ITEMS; i++)
    {
        std::cout << result[i] << ' ';
    }
}
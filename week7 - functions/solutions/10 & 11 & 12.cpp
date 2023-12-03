#include <iostream>
#include <algorithm>

template <typename T>
void swap(T *first, T *second)
{
    T temp = *first;
    *first = *second;
    *second = temp;
}

int find(int *arr, int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

void printDifference(int *arr1, int *arr2, int m, int n)
{
    // Before finding union, make sure arr1[0..m-1]
    // is smaller
    if (m > n)
    {
        swap(&arr1, &arr2);
        swap(&n, &m);
    }

    // Now arr1[] is smaller

    // Sort the first array and print its elements (these
    // two steps can be swapped as order in output is not
    // important)
    std::sort(arr1, arr1 + m);

    // Search every element of bigger array in smaller array
    // and print the element if not found
    // NOTE: use binary search after we've learned it
    for (int i = 0; i < n; i++)
    {
        if (find(arr1, m, arr2[i]) == -1)
        {
            std::cout << arr2[i] << " ";
        }
    }
}

void printUnion(int *arr1, int *arr2, int m, int n)
{
    std::sort(arr1, arr1 + m);
    std::sort(arr2, arr2 + n);
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            std::cout << arr1[i++] << " ";
        }
        else if (arr2[j] < arr1[i])
        {
            std::cout << arr2[j++] << " ";
        }
        else
        {
            std::cout << arr2[j++] << " ";
            i++;
        }
    }

    /* Print remaining elements of the larger array */
    while (i < m)
        std::cout << arr1[i++] << " ";

    while (j < n)
        std::cout << arr2[j++] << " ";
}

// Prints intersection of arr1[0..m-1] and arr2[0..n-1]
void printIntersection(int arr1[], int arr2[], int m, int n)
{
    // Before finding intersection, make sure arr1[0..m-1]
    // is smaller
    if (m > n)
    {
        int *tempp = arr1;
        arr1 = arr2;
        arr2 = tempp;

        int temp = m;
        m = n;
        n = temp;
    }

    // Now arr1[] is smaller

    // Sort smaller array arr1[0..m-1]
    std::sort(arr1, arr1 + m);

    // Search every element of bigger array in smaller
    // array and print the element if found
    for (int i = 0; i < n; i++)
        if (find(arr1, m, arr2[i]) != -1)
        {
            std::cout << arr2[i] << " ";
        }
}

int main()
{
    int arr1[] = {7, 1, 5, 2, 3, 6}, size1 = sizeof(arr1) / sizeof(arr1[0]),
        arr2[] = {3, 8, 6, 20, 7}, size2 = sizeof(arr2) / sizeof(arr2[0]);

    std::cout << "Difference of the two arrays is\n";
    printDifference(arr1, arr2, size1, size2);
    std::cout << "\nIntersection of the two arrays is\n";
    printIntersection(arr1, arr2, size1, size2);
    std::cout << "\nUnion of the two arrays is\n";
    printUnion(arr1, arr2, size1, size2);
}
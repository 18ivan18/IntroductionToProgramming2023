#include <cassert>

void swap(int *first, int *second)
{
    int temp = *first;
    *first = *second;
    *second = temp;
}

void bubbleSort(int *arr, int n)
{
    bool swapped;
    for (int i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr + j, arr + j + 1);
                swapped = true;
            }
        }
        // optimization: The above function always runs O(n^2) time even if the array is sorted.
        if (!swapped)
        {
            break;
        }
    }
}

void insertionSort(int *arr, int n)
{
    int key, j;
    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        /* Move elements of arr[0..i-1], that are
        greater than key, to one position ahead
        of their current position */
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void selectionSort(int *arr, int n)
{
    int minIndex;

    // One by one move boundary of unsorted subarray
    for (int i = 0; i < n - 1; i++)
    {
        // Find the minimum element in unsorted array
        minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element
        swap(arr + minIndex, arr + i);
    }
}

bool isSorted(int *v, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (v[i] > v[i + 1])
        {
            return false;
        }
    }
    return true;
}

void testBubbleSort()
{
    int arr[] = {7, 8, 4, 6, 3, 1, 2, 5}, size = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, size);
    assert(isSorted(arr, size));
}

void testInsertionSort()
{
    int arr[] = {7, 8, 4, 6, 3, 1, 2, 5}, size = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, size);
    assert(isSorted(arr, size));
}

void testSelectionSort()
{
    int arr[] = {7, 8, 4, 6, 3, 1, 2, 5}, size = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, size);
    assert(isSorted(arr, size));
}

int main()
{
    testBubbleSort();
    testInsertionSort();
    testSelectionSort();
}
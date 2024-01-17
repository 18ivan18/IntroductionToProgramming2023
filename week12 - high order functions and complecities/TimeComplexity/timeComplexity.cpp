#include <iostream>
#include "timeComplexity.h"

int strlen(char *str)
{
    int size = 0;
    while (*str)
    {
        size++;
        str++;
    }

    return size;
}

void isEvenOrOdd(int n)
{
    std::cout << (isOdd(n) ? "Odd\n" : "Even\n");
}

bool isOdd(int n)
{
    return n % 2;
    // return n & 1;
}

int *buildDictionary(char *sent)
{
    int size = strlen(sent);
    int *dictionary = new int[NUMBER_OF_LETTERS_IN_ENGLISH_ALPHABET];
    for (size_t i = 0; i < NUMBER_OF_LETTERS_IN_ENGLISH_ALPHABET; i++)
    {
        dictionary[i] = 0;
    }

    for (size_t i = 0; i < size; i++)
    {
        if (isLowercaseSymbol(sent[i]))
        {
            dictionary[sent[i] - LOWERCASE_A]++;
        }
        if (isUppercaseSymbol(sent[i]))
        {
            dictionary[sent[i] - UPPERCASE_A]++;
        }
    }
    return dictionary;
}

void getLetterFrequency(int *dictionary, char letter)
{
    if (isUppercaseSymbol(letter))
    {
        letter = letter - UPPERCASE_A + LOWERCASE_A;
    }
    std::cout << dictionary[letter - LOWERCASE_A] << std::endl;
}

bool isLowercaseSymbol(char c)
{
    return (c >= 'a' && c <= 'z');
}

bool isUppercaseSymbol(char c)
{
    return (c >= 'A' && c <= 'Z');
}

/*
    
    Notice that we added a counter to count how many times the inner block is executed.

    If you get the time complexity, it would be something like this:

    Line 2-3: 2 operations
    Line 4: a loop of size n
    Line 6-8: 3 operations inside the for-loop.

    So, this gets us 3(n) + 2.
*/

int findMax(int *arr, int n)
{
    int max;
    int counter = 0;

    for (size_t i = 0; i < n; i++)
    {
        counter++;
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    std::cout << "n: " << n << " counter: " << counter << std::endl;
    return max;
}

/*
Time complexity analysis:

Line 2-3: 2 operations
Line 5-6: double-loop of size n, so n^2.
Line 7-13: has ~3 operations inside the double-loop
We get 3n^2 + 2.

When we have an asymptotic analysis, we drop all constants and leave the most critical term: n^2. So, in the big O notation, it would be O(n^2).

*/

bool hasDuplicates(int *arr, int n)
{
    int counter = 0; // debug

    for (size_t outter = 0; outter < n; outter++)
    {
        for (size_t inner = 0; inner < n; inner++)
        {
            counter++; // debug

            if (outter == inner)
                continue;

            if (arr[outter] == arr[inner])
            {
                return true;
            }
        }
    }

    std::cout << "n: " << n << " counter: " << counter << std::endl; // debug
    return false;
}

/*
When a function has a single loop, it usually translates into a running time complexity of O(n). Now, this function has 2 nested loops and quadratic running time: O(n2).
*/
void bubbleSort(int *arr, int n)
{
    for (size_t outer = 0; outer < n; outer++)
    {
        for (size_t inner = outer + 1; inner < n; inner++)
        {
            if (arr[outer] > arr[inner])
            {
                swap(arr[outer], arr[inner]);
            }
        }
    }
}

template <typename T>
void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

/*
Let’s say you want to find the solutions for a multi-variable equation that looks like this:

3x + 9y + 8z = 79
*/
void findXYZ(int n)
{
    for (size_t x = 0; x < n; x++)
    {
        for (size_t y = 0; y < n; y++)
        {
            for (size_t z = 0; z < n; z++)
            {
                if (3 * x + 9 * y + 8 * z == 79)
                {
                    std::cout << x << ", " << y << ", " << z << std::endl;
                }
            }
        }
    }
}

#include <cstring>
/*
Calculating the time complexity of binarySearch is not as straightforward as the previous examples. This function is recursive.

There are several ways to analyze recursive algorithms. For simplicity, we are going to use the Master Method.
*/
int binarySearch(char **arr, int l, int r, char *x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;

        // If the element is present at the middle
        // itself
        if (strcmp(arr[mid], x) == 0)
            return mid;

        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (strcmp(arr[mid], x) > 0)
            return binarySearch(arr, l, mid - 1, x);

        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid + 1, r, x);
    }

    // We reach here when element is not
    // present in array
    return -1;
}

// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;

    // Create temp arrays
    int *L = new int[n1], *R = new int[n2];

    // Copy data to temp arrays L[] and R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    // Merge the temp arrays back into arr[l..r]

    // Initial index of first subarray
    int i = 0;

    // Initial index of second subarray
    int j = 0;

    // Initial index of merged subarray
    int k = l;

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of
    // L[], if there are any
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of
    // R[], if there are any
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }

    delete[] L;
    delete[] R;
}

// l is for left index and r is
// right index of the sub-array
// of arr to be sorted */
void mergeSort(int arr[], int l, int r)
{
    if (l >= r)
    {
        return; //returns recursively
    }
    int m = l + (r - l) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    merge(arr, l, m, r);
}
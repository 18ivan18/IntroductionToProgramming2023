#include <iostream>

// int patternMatchingIndex(int *arr1, int size1, int *arr2, int size2)
// {
//     for (int i = 0; i <= size1 - size2; i++)
//     {
//         int j;
//         for (j = 0; j < size2; j++)
//         {
//             if (arr1[i + j] != arr2[j])
//             {
//                 break;
//             }
//         }
//         if (j == size2)
//         {
//             return i;
//         }
//     }
//     return -1;
// }

int main()
{
    // std::cin >> n >> k;
    // turn n and k into arrays
    // n = 1234 // -> first array
    // k = 23 // -> secondArr
    // int firstArr[] = {1, 2, 3, 4};
    // int secondArr[] = {2, 3};
    // int size1 = sizeof(firstArr) / sizeof(firstArr[0]);
    // int size2 = sizeof(secondArr) / sizeof(secondArr[0]);

    // int match = patternMatchingIndex(firstArr, size1, secondArr, size2);
    // std::cout << std::boolalpha << (match != -1 && match != 0 && match != size1 - 1) << std::endl;

    int n, k;
    std::cin >> n >> k;
    bool result = false;

    // NB last and first digit are not ok
    n /= 10;

    while (n)
    {
        if (n % 10 == k % 10)
        {
            int nCopy = n, kCopy = k;
            bool foundDifferent = false;
            while (nCopy && kCopy)
            {
                if (nCopy % 10 != kCopy % 10)
                {
                    foundDifferent = true;
                    break;
                }
                nCopy /= 10;
                kCopy /= 10;
            }
            if (!foundDifferent && nCopy != 0)
            {
                result = true;
                break;
            }
        }
        n /= 10;
    }

    std::cout << std::boolalpha << result << std::endl;
}
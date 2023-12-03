#include <iostream>
#include <cassert>

int patternMatchingIndex(int *arr1, int size1, int *arr2, int size2)
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

int main()
{
    int nums1[] = {1, 6, 7}, size1 = sizeof(nums1) / sizeof(nums1[0]), nums2[] = {6, 7}, size2 = sizeof(nums2) / sizeof(nums2[0]);

    assert(patternMatchingIndex(nums1, size1, nums2, size2) == 1);

    int nums3[] = {1, 2, 3, 4, 5}, size3 = sizeof(nums3) / sizeof(nums3[0]), nums4[] = {3, 4, 5, 6}, size4 = sizeof(nums4) / sizeof(nums4[0]);

    assert(patternMatchingIndex(nums3, size3, nums4, size4) == -1);

    int nums5[] = {1, 6, 6, 6, 7}, size5 = sizeof(nums5) / sizeof(nums5[0]);
    assert(patternMatchingIndex(nums5, size5, nums2, size2) == 3);
}
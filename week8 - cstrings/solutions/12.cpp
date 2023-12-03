#include <iostream>
#include <cstring>

bool isSubsequence(char *subse, char *word)
{
    int size1 = strlen(subse), size2 = strlen(word);
    int j = 0;
    for (int i = 0; i < size1; i++)
    {
        if (word[j] == subse[i])
        {
            j++;
        }
    }
    return (j == size2);
}

int main()
{
    char src[] = "apple", pattern[] = "apl";
    std::cout << std::boolalpha << isSubsequence(src, pattern) << "\n";
    char src1[] = "CGTTCGGCTATCGTACGTTCTATTCTATGATTTCTAA", pattern1[] = "CGTTCGGCTATGCZTTCTACTTATTCTA";
    std::cout << std::boolalpha << isSubsequence(src1, pattern1) << "\n";
}
#include <iostream>
#include <cstring>
#include <algorithm>

const int MAX_SIZE = 1024;

int main()
{
    char alpha[MAX_SIZE], other[MAX_SIZE], c;
    int indexAlpha = 0, indexOther = 0;
    while (std::cin.get(c))
    {
        if (c == '\n')
        {
            break;
        }
        if (isalpha(c))
        {
            alpha[indexAlpha++] = c;
        }
        else
        {
            other[indexOther++] = c;
        }
    }
    alpha[indexAlpha] = '\0';
    other[indexOther] = '\0';
    // implement actual sorting algorithm here
    std::sort(alpha, alpha + indexAlpha);
    std::sort(other, other + indexOther);
    std::cout << strcat(alpha, other) << std::endl;
}
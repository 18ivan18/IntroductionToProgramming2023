#include <iostream>
#include <cstring>
#include <algorithm>
#include <numeric>

const int MAX_SIZE = 1024;

const char punct[] = {',', '.', ' ', '-', '?', '!', '\0'};

bool isPunctoation(char c)
{
    for (size_t i = 0; i < strlen(punct); i++)
    {
        if (punct[i] == c)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    char words[MAX_SIZE / 2][MAX_SIZE];
    int wordCounter = 0, index = 0, prevWasPunctoation = false;
    char c;
    while (std::cin.get(c))
    {
        if (c == '\n')
        {
            break;
        }
        if (isPunctoation(c))
        {
            if (!prevWasPunctoation)
            {
                words[wordCounter][index++] = '\0';
                wordCounter++;
                index = 0;
                prevWasPunctoation = true;
            }
        }
        else
        {
            words[wordCounter][index++] = c;
            prevWasPunctoation = false;
        }
    }

    int largestWord = 0;
    for (size_t i = 1; i < wordCounter; i++)
    {
        if (strlen(words[largestWord]) < strlen(words[i]))
        {
            largestWord = i;
        }
    }

    std::cout << words[largestWord] << std::endl;
}
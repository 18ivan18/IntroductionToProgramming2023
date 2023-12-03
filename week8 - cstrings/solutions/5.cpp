#include <iostream>
#include <cstring>

const int MAX_SIZE = 1024;

void swapStrings(char *x, char *y)
{
    char tmp[MAX_SIZE];
    strcpy(tmp, x);
    strcpy(x, y);
    strcpy(y, tmp);
}

int main()
{
    char words[MAX_SIZE / 2][MAX_SIZE];
    int wordCounter = 0, index = 0;
    char c;
    while (std::cin.get(c))
    {
        if (c == '\n')
        {
            break;
        }
        if (!isalpha(c))
        {
            words[wordCounter][index++] = '\0';
            wordCounter++;
            index = 0;
            while (!isalpha(c) && c != '\n')
            {
                std::cin.get(c);
            }
        }
        words[wordCounter][index++] = c;
    }

    bool swapped;
    for (size_t i = 0; i < wordCounter - 1; i++)
    {
        for (size_t j = 0; j < wordCounter - 1 - i; j++)
        {
            if (strcmp(words[j], words[j + 1]) > 0)
            {
                // swap words[j] and words[j + 1]
                swapStrings(words[j], words[j + 1]);
            }
        }
    }

    for (int i = 0; i < wordCounter; i++)
    {
        std::cout << words[i] << std::endl;
    }
}

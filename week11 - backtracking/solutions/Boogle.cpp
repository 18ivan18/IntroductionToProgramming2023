//Input: dictionary[] = { "GEEKS", "FOR", "QUIZ", "GO" };
//boggle[][] = { {'G', 'I', 'Z'},
//                {'U', 'E', 'K'},
//                {'Q', 'S', 'E'} };
//g i z u e k q s e
#include <iostream>
#include <cstring>

bool isWord(char *currentWord, char **words, int wordsSize)
{
    for (int i = 0; i < wordsSize; i++)
    {
        if (strcmp(words[i], currentWord) == 0)
        {
            return true;
        }
    }
    return false;
}

void findWords(int x, int y, char **boogle, char **words, int boogleSize, int wordsSize, char *currentWord, int currentWordIndex)
{

    char currentChar = boogle[x][y];
    currentWord[currentWordIndex++] = currentChar;
    currentWord[currentWordIndex] = '\0';
    if (isWord(currentWord, words, wordsSize))
    {
        std::cout << currentWord << std::endl;
    }
    // strongly suggested to use visited matrix
    boogle[x][y] = '0';

    int newX, newY;

    for (int row = x - 1; row <= x + 1 && row < boogleSize; row++)
    {
        for (int col = y - 1; col <= y + 1 && col < boogleSize; col++)
        {
            if (row >= 0 && col >= 0 && boogle[row][col] != '0')
            {
                findWords(row, col, boogle, words, boogleSize, wordsSize, currentWord, currentWordIndex);
            }
        }
    }

    boogle[x][y] = currentChar;
}

int main()
{
    int n = 3;
    char **boogle = new char *[n];
    for (int i = 0; i < n; i++)
    {
        boogle[i] = new char[n];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cin >> boogle[i][j];
        }
    }
    int m = 4;
    char **words = new char *[m];
    char word1[] = "geeks";
    char word2[] = "for";
    char word3[] = "quiz";
    char word4[] = "go";
    words[0] = word1;
    words[1] = word2;
    words[2] = word3;
    words[3] = word4;
    char *currentWord = new char[n * n + 1];
    int currentWordIndex = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            findWords(i, j, boogle, words, n, m, currentWord, currentWordIndex);
        }
    }

    for (int i = 0; i < n; i++)
    {
        delete[] boogle[i];
    }
    delete[] boogle;
    delete[] words;
    delete[] currentWord;
}
#include <iostream>
#include <cstring>

char *m[] = {
    "",
    "",
    "abc",
    "def",
    "ghi",
    "jkl",
    "mno",
    "pqrs",
    "tuv",
    "wxyz",
};

void makeCombinations(const char *digits, char *currString, int i, int n)
{
    if (i == n)
    {
        currString[i] = '\0';
        std::cout << currString << '\n';
        return;
    }

    for (int i = 0; i < strlen(m[digits[i] - '0']); i++)
    {
        char letter = m[digits[i] - '0'][i];
        currString[i] = letter;
        makeCombinations(digits, currString, i + 1, n);
    }
}

void letterCombinations(const char *digits)
{
    int n = strlen(digits);
    if (n == 0)
    {
        return;
    }
    char *currString = new char[n + 1];
    makeCombinations(digits, currString, 0, n);
    delete[] currString;
}
int main()
{
    letterCombinations("23");
}
#include <iostream>

int reverse(int n)
{
    int reverse = 0;
    while (n)
    {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }
    return reverse;
}

bool isPalindrome(int n)
{
    return n == reverse(n);
}

void printAllPalindromes(int from, int to)
{
    for (size_t i = from; i < to; i++)
    {
        if (isPalindrome(i))
        {
            std::cout << i << ' ';
        }
    }
    std::cout << '\n';
}

int main()
{
    int from = 0, to = 1000;
    printAllPalindromes(from, to);
}

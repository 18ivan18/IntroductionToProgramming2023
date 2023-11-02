#include <iostream>

const int TO_BASE = 16;

int main()
{
    int n;
    std::cin >> n;
    char number[100];
    int index = 0;
    unsigned int num = n;
    while (num)
    {
        int temp = num % TO_BASE;
        number[index++] = (temp > 9 ? char('a' + temp - 10) : char('0' + temp));
        num /= TO_BASE;
    }
    for (int i = index - 1; i >= 0; i--)
    {
        std::cout << number[i];
    }
    std::cout << std::endl;
}
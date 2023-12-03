#include <iostream>

int strlen(char *str)
{
    int cnt = 0;
    while (*str++)
    {
        cnt++;
    }
    return cnt;
}

int main()
{
    char str[] = "Hello World.";
    std::cout << strlen(str) << std::endl;
}

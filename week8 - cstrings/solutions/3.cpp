#include <iostream>

int strcmp(const char *str1, const char *str2)
{
    while (*str1)
    {
        if (*str1 != *str2)
        {
            break;
        }

        str1++;
        str2++;
    }

    return *str1 - *str2;
}

int main()
{
    char str1[] = "Megadeth";
    char str2[] = "Metallica";

    int ret = strcmp(str1, str2);
    if (ret > 0)
    {
        std::cout << str1 << " is greater than " << str2 << std::endl;
    }
    else if (ret < 0)
    {
        std::cout << str1 << " is less than " << str2 << std::endl;
    }
    else
    {
        std::cout << str1 << " is equal to " << str2 << std::endl;
    }
}
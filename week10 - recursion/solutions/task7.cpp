#include <cstring>
#include <iostream>

void skipWhiteSpaces(char *&c)
{
    while (isspace(*c))
    {
        c++;
    }
}

int stoi(char *&c)
{
    int number = 0;
    while (*c >= '0' && *c <= '9')
    {
        number = number * 10 + (*c - '0');
        c++;
    }
    return number;
}

int calculate(char *c, char operation, int presum, int prevArgument)
{

    skipWhiteSpaces(c);

    int larg = stoi(c);

    skipWhiteSpaces(c);

    if (!*c)
    {
        if (operation == '+')
        {
            return presum + larg;
        }
        if (operation == '-')
        {
            return presum - larg;
        }
        if (operation == '*')
        {
            return presum + prevArgument * larg;
        }
        if (operation == '/')
        {
            return presum + prevArgument / larg;
        }
    }

    if (operation == '+' || operation == '-')
    {
        if (*c == '+' || *c == '-')
        {
            return calculate(c + 1, *c, presum + (operation == '+' ? larg : -larg), 1);
        }
        else if (*c == '*' || *c == '/')
        {
            return calculate(c + 1, *c, presum, (operation == '+' ? larg : -larg));
        }
    }

    if (operation == '*' || operation == '/')
    {
        if (*c == '+' || *c == '-')
        {
            return calculate(c + 1, *c, presum + (operation == '*' ? prevArgument * larg : prevArgument / larg), 1);
        }
        else if (*c == '*' || *c == '/')
        {
            return calculate(c + 1, *c, presum, (operation == '*' ? larg * prevArgument : prevArgument / larg));
        }
    }
    return 0;
}

int calculate(char *s)
{
    return calculate(s, '+', 0, 1);
}

int main()
{
    char example1[] = "3+2*2";
    char example2[] = " 3/2 ";
    char example3[] = " 3+5 / 2 ";

    std::cout << calculate(example1) << std::endl; // 7
    std::cout << calculate(example2) << std::endl; // 1
    std::cout << calculate(example3) << std::endl; // 5
}
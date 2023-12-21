#include <iostream>
#include <cstring>
#include <cassert>

int createNumber(const char *str, int &i)
{
    int sign = 1;
    if (str[i] == '-')
    {
        sign *= 1;
        i++;
    }
    int num = 0;
    while (isdigit(str[i]))
    {
        num = num * 10 + str[i] - '0';
        i++;
    }
    i--;
    return num * sign;
}

int digitSum(int x)
{
    int sum = 0;
    while (x)
    {
        sum += x % 10;
        x /= 10;
    }

    return sum;
}

int cipherCost(const char *input, char *output)
{
    int size = strlen(input), cost = 0, j = 0;
    for (int i = 0; i < size; i++)
    {
        char c = input[i];
        if (c == 'a' or c == 'o' or c == 'A' or c == 'O')
        {
            cost++;
            continue;
        }
        if (isdigit(c) || (c == '-' && isdigit(input[i + 1])))
        {
            int num = createNumber(input, i);
            cost += digitSum(num);
            output[j++] = 'X';
            continue;
        }
        output[j++] = c;
    }
    output[j++] = '\0';

    return cost;
}

int main()
{
    const int MAX_SIZE = 129;
    // char input[MAX_SIZE];
    // std::cin.getline(input, MAX_SIZE);

    char output[MAX_SIZE];

    assert(cipherCost("qwerty4asdfgh", output) == 5);
    assert(strcmp(output, "qwertyXsdfgh") == 0);
    assert(cipherCost("qw1e2r3t11y12u13io", output) == 16);
    assert(strcmp(output, "qwXeXrXtXyXuXi") == 0);
    assert(cipherCost("asd1A2S3D123654", output) == 29);
    assert(strcmp(output, "sdXXSXDX") == 0);
    assert(cipherCost("I was born in 1989 in the city of YORK", output) == 31);
    assert(strcmp(output, "I ws brn in X in the city f YRK") == 0);
    assert(cipherCost("What is -15 * -2? It's 30!", output) == 12);
    assert(strcmp(output, "Wht is X * X? It's X!") == 0);
}
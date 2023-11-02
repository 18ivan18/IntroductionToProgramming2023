#include <iostream>
#include <cmath>

int main()
{
    int n;
    std::cin >> n;
    double result = 0;
    for (size_t i = 1; i <= n; i++)
    {
        result += 1 / pow(i, i);
    }

    std::cout << result << std::endl;
}
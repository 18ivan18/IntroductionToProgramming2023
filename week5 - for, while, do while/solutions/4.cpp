#include <iostream>

int main()
{
    int n, m;
    std::cin >> n >> m;
    double result = 1;
    if (m > 0)
    {
        for (size_t i = 0; i < m; i++)
        {
            result *= n;
        }
    }
    else
    {
        m *= -1;
        for (size_t i = 0; i < m; i++)
        {
            result /= n;
        }
    }
    std::cout << result << std::endl;
}
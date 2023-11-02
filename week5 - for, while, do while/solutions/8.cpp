#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    for (size_t i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            std::cout << i << " ";
        }
    }
}
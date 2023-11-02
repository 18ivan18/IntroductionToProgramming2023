#include <iostream>

int main()
{
    int n, m;
    std::cin >> n >> m;
    int gcd = 1;
    for (size_t i = 1; i <= n && i <= m; i++)
    {
        if (n % i == 0 && m % i == 0)
        {
            gcd = i;
        }
    }
    std::cout << gcd << std::endl;
}
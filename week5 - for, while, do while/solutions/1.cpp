#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int sum = 0, prod = 1;
    for (size_t i = 1; i <= n; i++)
    {
        std::cout << i << " ";
        sum += i;
        prod *= i;
    }
    std::cout << std::endl
              << sum << " " << prod << std::endl;
}
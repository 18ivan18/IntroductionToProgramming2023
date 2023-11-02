#include <iostream>
#include <cmath>

int main()
{
    int n;
    std::cin >> n;
    int sum = 0;
    if (n < 0)
    {
        n *= -1;
    }
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    std::cout << sum << std::endl;
}
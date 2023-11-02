#include <iostream>

int main()
{
    int n, m;
    std::cin >> n >> m;
    int sum = 0, prod = 1;
    if (n > m)
    {
        int temp = n;
        n = m;
        m = temp;
    }
    if (abs(n) % 2 == 1)
    {
        n++;
    }
    for (int i = n; i <= m; i += 2)
    {
        std::cout << i << " ";
        sum += i;
        prod *= i;
    }
    std::cout << std::endl
              << sum << " " << prod << std::endl;
}
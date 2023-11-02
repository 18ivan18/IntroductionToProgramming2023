#include <iostream>
#include <cmath>

int main()
{
    int n, x;
    std::cin >> x >> n;
    double result = 0;
    for (size_t i = 0; i < n; i++)
    {
        double fact = 1;
        for (size_t j = 1; j <= 2 * i; j++)
        {
            fact *= j;
        }
        double m = (pow(-1, i) * pow(x, 2 * i)) / fact;
        std::cout << m << '\n';
        result += m;
    }

    std::cout << "The sum of the above series is: " << result << std::endl;
}
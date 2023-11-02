#include <iostream>
#include <cmath>

int main()
{
    int n, m;
    std::cin >> n >> m;
    for (size_t i = n; i <= m; i++)
    {
        int curr = i, sum = 0, numberOfDigits = 0;
        while (curr > 0)
        {
            curr /= 10;
            numberOfDigits++;
        }
        curr = i;
        while (curr > 0)
        {
            sum += pow(curr % 10, numberOfDigits);
            curr /= 10;
        }

        if (sum == i)
        {
            std::cout << i << " ";
        }
    }
}
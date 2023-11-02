#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int k = 2;
    while (n != 1)
    {
        if (n % k == 0)
        {
            std::cout << k << " ";
            while (n % k == 0)
            {
                n /= k;
            }
        }
        k++;
    }
}
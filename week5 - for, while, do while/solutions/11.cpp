#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int originalN = n;
    /*
    1234
    0 * 10 + 4 = 4 * 10 + 3 = 43 * 10 + 2 = 432 * 10 + 1 = 4321
    4321
    */
    int result = 0;
    while (n > 0)
    {
        result = result * 10 + n % 10;
        n /= 10;
    }
    std::cout << result;
    originalN == result;
}
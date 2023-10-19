#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int binaryNumber = 0;
    int order = 1;
    while (n > 0)
    {
        binaryNumber += order * (n % 2);
        n = n / 2;
        order = order * 10;
    }
    std::cout << binaryNumber;
}
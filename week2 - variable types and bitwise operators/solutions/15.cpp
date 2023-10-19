#include <iostream>

int main()
{
    int number;
    std::cin >> number;
    int tmp = (number >> 1) + number;
    std::cout << std::boolalpha << ((tmp & tmp + 1) == 0);
}

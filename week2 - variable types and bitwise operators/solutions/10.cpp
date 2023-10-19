#include <iostream>

int main()
{
    int number;
    std::cin >> number;

    std::cout << std::boolalpha << ((number & 1) != 1) << std::endl;
}
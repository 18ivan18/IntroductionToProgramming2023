#include <iostream>

int main()
{
    int number;
    std::cin >> number;
    int lastDigit = number % 10;
    int secondDigit = number / 10 % 10;
    int firstDigit = number / 100;
    if (firstDigit <= secondDigit && secondDigit <= lastDigit)
    {
        std::cout << "True\n";
    }
    else
    {
        std::cout << "False\n";
    }
    // std::cout << std::boolalpha << (firstDigit <= secondDigit && secondDigit <= lastDigit) << std::endl;
}
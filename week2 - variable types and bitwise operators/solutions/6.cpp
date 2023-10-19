#include <iostream>

int main()
{
    int number;
    std::cin >> number;

    int fourthDigit = number % 10;
    int thirdDigit = number / 10 % 10;
    int secondDigit = number / 100 % 10;
    int firstDigit = number / 1000 % 10;

    std::cout << fourthDigit << "-" << thirdDigit << "-" << secondDigit << "-" << firstDigit;
}
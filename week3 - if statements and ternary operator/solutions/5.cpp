#include <iostream>

int main()
{
    int number;
    std::cin >> number;
    if (number < 1001 || number >= 8888)
    {
        throw "Wrong input!";
    }
    int m, counter = 0;
    std::cin >> m;
    int lastDigit = number % 10;
    int thirdDigit = number / 10 % 10;
    int secondDigit = number / 100 % 10;
    int firstDigit = number / 1000;

    if (firstDigit == m)
    {
        counter++;
    }
    if (secondDigit == m)
    {
        counter++;
    }
    if (thirdDigit == m)
    {
        counter++;
    }
    if (lastDigit == m)
    {
        counter++;
    }
    std::cout << counter << std::endl;
}
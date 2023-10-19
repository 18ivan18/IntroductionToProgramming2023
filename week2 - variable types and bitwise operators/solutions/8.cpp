#include <iostream>
#include <cmath>

int main()
{
    double number;

    std::cin >> number;

    int integerPart = floor(number);
    //	еквивалентно:
    //	int integerPart = (int)number;
    //	int integerPart = int(number);
    //	int integerPart = static_cast<int>(number);

    std::cout << integerPart;
}
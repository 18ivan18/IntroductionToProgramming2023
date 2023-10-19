#include <iostream>

int main()
{
    char firstSymbol, secondSymbol, thirdSymbol;
    std::cin >> firstSymbol >> secondSymbol >> thirdSymbol;

    int firstSymbolDigit = firstSymbol - '0';
    int secondSymbolDigit = secondSymbol - '0';
    int thirdSymbolDigit = thirdSymbol - '0';

    int result = firstSymbolDigit * 100 + secondSymbolDigit * 10 + thirdSymbolDigit;
    std::cout << result;
}
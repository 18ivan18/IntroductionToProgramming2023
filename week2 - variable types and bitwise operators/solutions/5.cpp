#include <iostream>

int main()
{
    double firstNumber;
    double secondNumber;

    std::cin >> firstNumber >> secondNumber;

    // a) с помощна променлива; в случая променливата temp;
    double temp = firstNumber;
    firstNumber = secondNumber;
    secondNumber = temp;
    std::cout << "a = " << firstNumber << ", b = " << secondNumber << std::endl;

    // б) с аритметични операции
    firstNumber = firstNumber + secondNumber;
    secondNumber = firstNumber - secondNumber;
    firstNumber = firstNumber - secondNumber;
    std::cout << "a = " << firstNumber << ", b = " << secondNumber << std::endl;
}
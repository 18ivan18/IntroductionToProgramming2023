#include <iostream>

int main()
{
    int number;
    std::cin >> number;

    int oneLessThanNumber = number - 1;

    // доста готино обяснение на алгоритъма ще откриете на: https://iq.opengenus.org/detect-if-a-number-is-power-of-2-using-bitwise-operators/
    // двата записа отдолу са еквивалентни.
    std::cout << std::boolalpha << ((number & oneLessThanNumber) == 0);
    // std::cout << !(a & oneLessThanNumber);
}
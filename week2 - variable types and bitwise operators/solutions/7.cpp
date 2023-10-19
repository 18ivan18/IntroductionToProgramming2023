#include <iostream>

int main()
{
    char symbol;
    std::cin >> symbol;

    // трите преобразувания са еквивалентни
    std::cout << (int)symbol;
    //cout << int(symbol);
    //cout << static_cast<int>(symbol);
}
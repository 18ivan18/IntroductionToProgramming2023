#include <iostream>

int main()
{
    char symbol;
    std::cin >> symbol;

    if (symbol >= 'A' && symbol <= 'Z')
    {
        std::cout << symbol << std::endl;
    }
    else if (symbol >= 'a' && symbol <= 'z')
    {
        std::cout << char(symbol - 'a' + 'A') << std::endl;
    }
    else
    {
        std::cout << "Invalid input!" << std::endl;
    }
}
#include <iostream>

int main()
{
    char symbol;
    std::cin >> symbol;

    if (symbol >= 'A' && symbol <= 'Z')
    {
        std::cout << symbol << " is a capital letter!\n";
    }
    else if (symbol >= 'a' && symbol <= 'z')
    {
        std::cout << symbol << " is a small letter!\n";
    }
    else if (symbol >= '0' && symbol <= '9')
    {
        std::cout << symbol << " is a digit!\n";
    }
    else
    {
        std::cout << symbol << " is neither letter nor number!\n";
    }

    switch (symbol)
    {
    case 'a' ... 'z':
        std::cout << "Small letter\n";
        break;
    case 'A' ... 'Z':
        std::cout << "Capital letter\n";
        break;
    case '0' ... '9':
        std::cout << "Digit\n";
        break;
    default:
        std::cout << "Other\n";
        break;
    }
}
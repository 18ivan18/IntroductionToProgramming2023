#include <iostream>

int main()
{

    int a, b;
    char op;
    std::cin >> a >> b >> op;

    switch (op)
    {
    case '+':
        std::cout << a + b << std::endl;
        break;
    case '-':
        std::cout << a - b << std::endl;
        break;
    case '*':
        std::cout << a * b << std::endl;
        break;
    case '/':
        if (b == 0)
        {
            std::cout << "Error! Division by 0!\n";
        }
        else
        {
            std::cout << a / b << std::endl;
        }
        break;
    case '%':
        if (b == 0)
        {
            std::cout << "Error! Division by 0!\n";
        }
        else
        {
            std::cout << a % b << std::endl;
        }
        break;
    default:
        std::cout << "Invalid input!\n";
    }
}

#include <iostream>
// #define NDEBUG
#include <cassert>
#include <exception>

void toBinary(int n)
{
    if (n == 0)
    {
        return;
    }

    toBinary(n / 2);
    std::cout << n % 2;
}

void readInput(int &n)
{
    std::cin >> n;
    if (n < 0)
    {
        throw std::invalid_argument("Input can't be negative.");
    }
}

int main()
{
    int n;
    // assert(n >= 0);
    try
    {
        readInput(n);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
        return -1;
    }

    toBinary(n);
    std::cout << std::endl;
}
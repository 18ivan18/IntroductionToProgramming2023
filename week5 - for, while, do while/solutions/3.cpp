#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    if (n < 0)
    {
        std::cout << "Invalid Input." << std::endl;
    }
    else
    {
        int fact = 1;
        for (size_t i = 1; i <= n; i++)
        {
            fact *= i;
        }
        std::cout << fact << std::endl;
    }
}
#include <iostream>
#include <cmath>

int main()
{
    int n;
    std::cin >> n;

    // A prime number only has 2 dividers

    int ctr = 0;
    for (int a = 1; a <= n; a++)
    {
        if (n % a == 0)
        {
            ctr++;
        }
    }
    if (ctr == 2)
    {
        std::cout << "The entered number is a prime number. \n";
    }
    else
    {
        std::cout << "The number you entered is not a prime number. \n";
    }

    bool isPrime = true;
    for (size_t i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    std::cout << std::boolalpha << isPrime << std::endl;
}
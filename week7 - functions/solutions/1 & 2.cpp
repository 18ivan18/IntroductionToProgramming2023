#include <iostream>
#include <cmath>

// && ако имаме дори едно false -> false
// || ако имаме дори едно true -> true

bool isPrime(int num)
{
    if (num < 2)
    {
        return false;
    }

    for (size_t i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    // num % 2 != 0 && num % 3 != 0 && num % 4 != 0 ...

    return true;
}
// bool -> int: true -> 1, false -> 0
// int -> bool: 0 -> false, else -> true

int numberOfPrimeNumbers(int n)
{
    int num, counter = 0;
    for (size_t i = 0; i < n; i++)
    {
        std::cin >> n;
        // if (isPrime(n))
        // {
        //     counter++;
        // }
        counter += isPrime(n);
    }

    return counter;
}

int main()
{
    int n = 10;
    // std::cin >> n;
    std::cout << numberOfPrimeNumbers(n) << std::endl;
}
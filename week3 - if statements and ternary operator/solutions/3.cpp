#include <iostream>

int main()
{
    int number;
    std::cin >> number;
    int lastDigit = number % 10;
    int secondDigit = number / 10 % 10;
    int firstDigit = number / 100;
    // if (firstDigit == secondDigit || firstDigit == lastDigit ||
    //     secondDigit == lastDigit)
    // {
    //     std::cout << "There are some repeating digits." << std::endl;
    // }
    // else
    // {
    //     std::cout << "There are no repeating digits." << std::endl;
    // }
    if (firstDigit == secondDigit && firstDigit == lastDigit &&
        secondDigit == lastDigit)
    {
        std::cout << "All digits are repeating." << std::endl;
    }
    else if (firstDigit == secondDigit)
    {
        std::cout << "The first and seconds digit are repeating." << std::endl;
    }
    else if (firstDigit == lastDigit)
    {
        std::cout << "The first and third digit are repeating." << std::endl;
    }
    else if (secondDigit == lastDigit)
    {
        std::cout << "The second and third digit are repeating." << std::endl;
    }
    else
    {
        std::cout << "There are no repeating digits." << std::endl;
    }
}
#include <iostream>

int main()
{
    int n, m;
    std::cin >> n >> m;
    int lastDigit = n % 10;
    int secondDigit = n / 10 % 10; // може и (n / 10) % 10 за четимост
    int firstDigit = n / 100;
    if (lastDigit == m || secondDigit == m || firstDigit == m)
    {
        std::cout << "True" << std::endl;
    }
    else
    {
        std::cout << "False" << std::endl;
    }
    // std::cout << std::boolalpha << (lastDigit == m || secondDigit == m || firstDigit == m) << std::endl;
}

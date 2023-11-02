#include <iostream>

int main()
{
    int number;
    std::cin >> number;
    if (number < 0)
    {
        std::cout << "The number is not a palindrome." << std::endl;
        return 0;
    }
    int rev = 0, originalNumber = number;
    do
    {
        rev = rev * 10 + number % 10;
        number /= 10;
    } while (number != 0);

    std::cout << "The reverse of the number is: " << rev << std::endl;

    std::cout << (originalNumber == rev ? "The number is a palindrome." : "The number is not a palindrome.") << std::endl;
}
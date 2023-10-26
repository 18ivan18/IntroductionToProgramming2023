#include <iostream>

int main()
{
    // for (initializationStatement; testExpression; updateStatement)
    // {
    //     // statements inside the body of loop
    // }

    for (int i = 0; i < 10; i++)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // task -> is sum(0 ... n) including == (n*(n-1)) / 2 ??
    int sum = 0;
    for (int i = 0; i <= 10; i++)
    {
        sum += i;
    }
    std::cout << std::boolalpha << (sum == (10 * 11) / 2) << "\n";

    //     while (testExpression)
    // {
    //     // statements inside the body of the loop
    // }

    int i = 0;
    while (i <= 5)
    {
        std::cout << i << " ";
        i++;
    }
    std::cout << std::endl;

    // do
    // {
    //    // statements inside the body of the loop
    // }
    // while (testExpression);

    double number, sum1 = 0;
    do
    {
        std::cout << "Enter a number: ";
        std::cin >> number;
        sum1 += number;
    } while (number != 0.0);
    std::cout << sum1 << "\n";

    // validation
    // enter a number between 2^10 = 1024 and 2^13 = 8172

    do
    {
        std::cin >> number;
    } while (number < 1 << 10 || number > 1 << 13);
    std::cout << "Your number is: " << number << "\n";

    // break
    int num;
    sum = 0;
    for (int i = 1; i <= 10; ++i)
    {
        std::cout << "Enter a number: ";
        std::cin >> num;

        // if the user enters a negative number, break the loop
        if (number < 0.0)
        {
            break;
        }

        sum += number; // sum = sum + number;
    }
    std::cout << sum << "\n";

    sum = 0;
    for (int i = 1; i <= 10; ++i)
    {
        std::cout << "Enter a number: ";
        std::cin >> num;

        // if the user enters a negative number, break the loop
        if (number < 0.0)
        {
            continue;
        }

        sum += number; // sum = sum + number;
    }
    std::cout << sum << "\n";
}
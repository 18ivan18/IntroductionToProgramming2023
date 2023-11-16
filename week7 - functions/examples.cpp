#include <iostream>
#include <iomanip>

// f: N -> N
// f(x) = x ^ 2

int f(int num)
{
    return num * num;
}

int sum(int first, int second)
{
    return first + second;
}

bool isPerfectNumber(int num)
{
    // ...
    return true;
}

void perfectNumbers(int min, int max)
{
    if (min > max)
    {
        std::cout << "Error\n";
        return;
    }
    for (size_t i = min; i < max; i++)
    {
        if (isPerfectNumber(i))
        {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
}

void decrement(int &num)
{
    num--;
    std::cout << num << " ";
}

void decrement(int *numPtr)
{
    (*numPtr)--;
    std::cout << *numPtr << " ";
}

void swap(int *&a, int *&b)
{
    int *temp = a;
    a = b;
    b = temp;
}

void doSomething(int a)
{
    std::cout << "Integer " << a << std::endl;
}

void doSomething(double a)
{
    std::cout << "Double " << std::fixed << std::setprecision(2) << a << std::endl;
}

int main()
{
    int a = 5;
    std::cout << f(5) << std::endl;
    int power = f(a);
    int min = 5, max = 10;
    perfectNumbers(min, max);
    // f(a) = 1; НЕ
    decrement(a);
    std::cout << a << " ";
    int *aPtr = &a;
    decrement(aPtr);
    std::cout << a << " ";

    int *ptr = &a;

    int a = 10, b = 20;
    int *ptrA = &a, *ptrB = &b;
    swap(ptrA, ptrB);
    std::cout << a << " " << b << std::endl;         // 20 10
    std::cout << *ptrA << " " << *ptrB << std::endl; // 20 10
    a = 30;
    std::cout << a << " " << b << std::endl;         // 30 20
    std::cout << *ptrA << " " << *ptrB << std::endl; // 20 30

    int a = 10;
    double b = 3.1;
    doSomething(a);
    doSomething(b);
}
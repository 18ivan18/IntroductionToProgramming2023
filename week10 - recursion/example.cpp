#include <iostream>

// f(4) = 3
// {n = 4} // return 3
// {n = 3} // return 2
// {n = 2} // return 1
// {n = 1} // return 1
// {n = 0} // return 0
// {n = 1} // return 1
// {n = 2} // return 1
// {n = 1} // return 1
// {n = 0} // return 0

int f(unsigned int n)
{
    if (n <= 1)
    {
        return n;
    }
    return f(n - 1) + f(n - 2);
}

// void print(int *arr, int n)
// {
//     for (size_t i = 0; i < n; i++)
//     {
//         std::cout << arr[i] << " ";
//     }
//     std::cout << "\n";
// }

void print(int *arr, int n)
{
    // дъно
    if (n == 0)
    {
        return;
    }
    // рекурсивно извикване
    print(++arr, n - 1);
    // извършваме работа
    std::cout << *arr << " ";
}

// { *arr = 1, n = 4 } // return
// { *arr = 2, n = 3 } // return
// { *arr = 3, n = 2 } // return
// { *arr = 4, n = 1 } // return
// { *arr = ??, n = 0 } // return
// print: 4 3 2 1

// void toBinary(int num)
// {
//     if (num == 0)
//     {
//         return;
//     }
//     toBinary(num / 2);
//     std::cout << num % 2;
// }

int fibonnaci(int x)
{
    if (x <= 1)
    {
        return x;
    }
    return (fibonnaci(x - 1) + fibonnaci(x - 2));
}

void toBinary(int num, int &binaryNum)
{
    if (num == 0)
    {
        return;
    }
    toBinary(num / 2, binaryNum);
    binaryNum = binaryNum * 10 + num % 2;
}

int toBinary(int num)
{
    int bin = 0;
    toBinary(num, bin);
    return bin;
}

// sum = (...((((x + 2)x + 3)x + 4)x + 5)...)x + (n-1))x + n;
// double sum(int n, double x)
// {
//     if (n == 2)
//     {
//         return x + 2;
//     }
//     return n + x * sum(n - 1, x);
// }

// sum = 1 + 1/2 + 1/3 + ... + 1/n
// double sum(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     return 1.0 / n + sum(n - 1);
// }

// Да се напише рекурсивна функция, която намира най-малката цифра в число.
int minDigit(int num, int min)
{
    if (num == 0)
    {
        return min;
    }
    if (min > num % 10)
    {
        min = num % 10;
    }
    // return minDigit(num / 10, num % 10 < min ? num % 10 : min);
    return minDigit(num / 10, min);
}

int minDigit(int num)
{
    if (num == 0)
    {
        return INT32_MAX;
    }
    int result = minDigit(num / 10);
    return std::min(result, num % 10);
}

// Да се напише рекурсивна функция, която намира сумата на цифрите в дадено число.
int sumOfDigits(int num, int sum)
{
    if (num == 0)
    {
        return sum;
    }
    sum += num % 10;
    // return minDigit(num / 10, num % 10 < min ? num % 10 : min);
    return minDigit(num / 10, sum);
}

// sumOfDigits(12345)
// sumOfDigits(1234) + 5
// -> sumOfDigits(123) + 4 + 5
// -> sumOfDigits(12) + 3 + 4 + 5
// -> sumOfDigits(1) + 2 + 3 + 4 + 5
// -> sumOfDigits(0) + 1 + 2 + 3 + 4 + 5
// -> 0 + 1 + 2 + 3 + 4 + 5
int sumOfDigits(int num)
{
    if (num == 0)
    {
        return 0;
    }
    return sumOfDigits(num / 10) + num % 10;
}

int main()
{
    // std::cout << f(8) << "\n";
    // int arr[] = {1, 2, 3, 4}, size = sizeof(arr) / sizeof(arr[0]);
    // print(arr, size);
    // std::cout << toBinary(2) << "\n";

    // int n;
    // double x;
    // std::cin >> n >> x;
    // std::cout << sum(n, x) << "\n";
    std::cout << minDigit(12345) << "\n";
    std::cout << sumOfDigits(12345) << "\n";
}
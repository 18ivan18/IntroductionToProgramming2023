#include <iostream>

// int *ptr - address -> type int*
// *ptr - value -> type int
void swap(int *a, int *b)
{
    int temp = *a; // числото temp има стойността на а
    *a = *b;       // стойността на а = стойността на б
    *b = temp;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 10, b = 20;
    swap(a, b);
    std::cout << a << " " << b << std::endl;
}
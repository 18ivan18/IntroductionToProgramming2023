#include <iostream>
#include <cmath>

int main()
{
    // 1234 / 10 - за десетична бройна система
    // 101 >> 1 - за двоична
    // 101(2) = 5(10)
    //    &
    // 001
    int n;
    std::cin >> n;
    int counter = 0;
    while (n > 0)
    {
        // if (n & 1 == 1)
        // {
        //     counter++;
        // }
        if (n % 2 == 1)
        {
            counter++;
        }
        n = n >> 1;
    }
}
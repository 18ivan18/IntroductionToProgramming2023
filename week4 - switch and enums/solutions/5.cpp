#include <iostream>

int main()
{
    int upRightX, upRightY, downLeftX, downLeftY;
    int x, y;
    std::cin >> upRightX >> upRightY >> downLeftX >> downLeftY >> x >> y;
    if (x <= upRightX && x >= downLeftX && y >= downLeftY && y <= upRightY)
    {
        std::cout << "Inside" << std::endl;
    }
    else
    {
        std::cout << "Not inside" << std::endl;
    }
}
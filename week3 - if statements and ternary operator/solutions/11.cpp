#include <iostream>

int main()
{
    double x1 = -10, y1 = 8;
    double x2 = 14, y2 = -24;
    double r1 = 30, r2 = 10;
    std::cin >> x1 >> y1 >> x2 >> y2 >> r1 >> r2;
    if (x1 == x2 && y1 == y2 && r1 == r2)
    {
        std::cout << "Circle are the same." << std::endl;
    }
    else
    {
        int distSq = (x1 - x2) * (x1 - x2) +
                     (y1 - y2) * (y1 - y2);
        int radSumSq = (r1 + r2) * (r1 + r2);
        if (distSq == radSumSq)
        {
            std::cout << "Circle touch each other." << std::endl;
        }
        else if (distSq > radSumSq)
        {
            std::cout << "Circle not touch each other." << std::endl;
        }
        else
        {
            std::cout << "Circle intersect each other." << std::endl;
        }
    }
}
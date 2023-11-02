#include <iostream>
#include <cmath>

int main()
{
    double x, y;
    std::cin >> x >> y;

    // a)
    if (x >= -1 && x <= 1 && y >= -1 && y <= 1)
    { // еквивалентно: abs(x) <= 1 && abs(y) <= 1
        std::cout << "Point is inside the figure.";
    }
    else
    {
        std::cout << "Point is outside the figure.";
    }

    // б)
    if (x >= 1 && x <= 2 && y >= 1 && y <= 2)
    {
        std::cout << "Point is inside the figure.";
    }
    else
    {
        std::cout << "Point is outside the figure.";
    }

    // в)
    // полукръг с център (0,0) и радиус 2, разположен над абсцисата:
    bool isInsideBigBlackSemicircle = x * x + y * y <= 4 && y >= 0;
    // полукръг с център (-1,0) и радиус 1 (частта над абсцисата се включва в големия кръг):
    bool isInsideLittleBlackSemicircle = (x + 1) * (x + 1) + y * y <= 1;
    // кръг с център (1,0) и радиус 1, без да се включва контурът;
    // контурът не искаме да се включва, защото в задачата ни е позволено да се намираме в/у него:
    bool isInsideLittleWhiteSemicircle = (x - 1) * (x - 1) + y * y < 1;
    if ((isInsideBigBlackSemicircle || isInsideLittleBlackSemicircle) && !isInsideLittleWhiteSemicircle)
    {
        std::cout << "Point is inside the figure.";
    }
    else
    {
        std::cout << "Point is outside the figure.";
    }

    // г)
    double x, y, d;
    d = sqrt(x * x + y * y);
    if (d <= 1 && ((y - x >= 0 && x + y >= 0) ||
                   (y - x <= 0 && x + y <= 0)))
    {
        std::cout << "Point is inside the figure.";
    }

    // д)
    double leftCircleD = sqrt(pow((x + 2), 2) + y * y);

    if (leftCircleD >= 1 && leftCircleD <= 2 ||
        (y >= 0 && sqrt(x * x + y * y) <= 4 &&
         sqrt(pow((x - 2), 2) + y * y) >= 2 &&
         sqrt(pow((x + 2), 2) + y * y) >= 2))
    {
        std::cout << "Point is inside the figure.";
    }
}
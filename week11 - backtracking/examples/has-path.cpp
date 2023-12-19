#include <iostream>
#include <cassert>

bool outOfBounds(int x, int y, int n, int m)
{
    return x < 0 || x >= n || y < 0 || y >= m;
}

bool hasPath(char **lab, int n, int m, int x, int y, int finalX, int finalY)
{
    if (outOfBounds(x, y, n, m) || lab[x][y] == '-')
    {
        return false;
    }
    if (x == finalX && y == finalY && lab[x][y] == '.')
    {
        return true;
    }

    // mark as visited
    lab[x][y] = '-';

    return hasPath(lab, n, m, x + 1, y, finalX, finalY) || hasPath(lab, n, m, x - 1, y, finalX, finalY) || hasPath(lab, n, m, x, y + 1, finalX, finalY) || hasPath(lab, n, m, x, y - 1, finalX, finalY);
}

int main()
{
    int n, m, startX, startY;
    std::cin >> n >> m;
    char **lab = new char *[n];
    for (size_t i = 0; i < m; i++)
    {
        lab[i] = new char[m];
    }

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            std::cin >> lab[i][j];
        }
    }

    std::cin >> startX >> startY;
    const int finalX = 3, finalY = 3;

    assert(!outOfBounds(startX, startY, n, m));
    assert(!outOfBounds(finalX, finalY, n, m));
    std::cout << std::boolalpha << hasPath(lab, n, m, startX, startY, finalX, finalY) << std::endl;

    for (size_t i = 0; i < m; i++)
    {
        delete[] lab[i];
    }
    delete[] lab;
}
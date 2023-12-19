#include <iostream>
#include <cassert>

bool outOfBounds(int x, int y, int n, int m)
{
    return x < 0 || x >= n || y < 0 || y >= m;
}

bool findPath(char **lab, int n, int m, int x, int y, int finalX, int finalY, char *path, int &pathIndex)
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

    x = x + 1;
    path[pathIndex++] = 'D';
    if (findPath(lab, n, m, x, y, finalX, finalY, path, pathIndex))
    {
        return true;
    }
    pathIndex--;
    x = x - 1;

    x = x - 1;
    path[pathIndex++] = 'U';
    if (findPath(lab, n, m, x, y, finalX, finalY, path, pathIndex))
    {
        return true;
    };
    pathIndex--;
    x = x + 1;

    y = y - 1;
    path[pathIndex++] = 'L';
    if (findPath(lab, n, m, x, y, finalX, finalY, path, pathIndex))
    {
        return true;
    };
    pathIndex--;
    y = y + 1;

    y = y + 1;
    path[pathIndex++] = 'R';
    if (findPath(lab, n, m, x, y, finalX, finalY, path, pathIndex))
    {
        return true;
    };
    pathIndex--;
    y = y - 1;

    return false;
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
    char *path = new char[n * m];
    int pathIndex = 0;
    bool hasPath = findPath(lab, n, m, startX, startY, finalX, finalY, path, pathIndex);

    std::cout << std::boolalpha << hasPath << std::endl;

    if (hasPath)
    {
        for (size_t i = 0; i < pathIndex; i++)
        {
            std::cout << path[i] << ' ';
        }
    }

    for (size_t i = 0; i < m; i++)
    {
        delete[] lab[i];
    }
    delete[] lab;
    delete[] path;
}
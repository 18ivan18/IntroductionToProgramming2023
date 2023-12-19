#include <iostream>
#include <cstring>
#include <cassert>

bool outOfBounds(int x, int y, int n, int m)
{
    return x < 0 || x >= n || y < 0 || y >= m;
}

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
char direction[] = {'D', 'U', 'R', 'L'};

void findAllPaths(char **lab, int n, int m, int x, int y, int finalX, int finalY, char *path, int &pathIndex, char **allPaths, int &pathsNumber)
{
    if (outOfBounds(x, y, n, m) || lab[x][y] == '-')
    {
        return;
    }
    if (x == finalX && y == finalY && lab[x][y] == '.')
    {
        path[pathIndex] = '\0';
        allPaths[pathsNumber] = new char[pathIndex + 1];
        strcpy(allPaths[pathsNumber++], path);
        return;
    }

    // mark as visited
    lab[x][y] = '-';

    for (size_t i = 0; i < 4; i++)
    {
        path[pathIndex++] = direction[i];
        findAllPaths(lab, n, m, x + dx[i], y + dy[i], finalX, finalY, path, pathIndex, allPaths, pathsNumber);
        // backtrack
        pathIndex--;
    }

    // backtrack
    lab[x][y] = '.';
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
    const int endX = 3, endY = 3;

    assert(!outOfBounds(startX, startY, n, m));
    assert(!outOfBounds(endX, endY, n, m));
    char *path = new char[n * m];
    int pathIndex = 0;
    char **allPaths = new char *[n * m];
    int pathsNumber = 0;
    findAllPaths(lab, n, m, startX, startY, endX, endY, path, pathIndex, allPaths, pathsNumber);

    for (size_t i = 0; i < pathsNumber; i++)
    {
        std::cout << allPaths[i] << '\n';
        delete[] allPaths[i];
        allPaths[i] = nullptr;
    }
    delete[] allPaths;

    for (size_t i = 0; i < m; i++)
    {
        delete[] lab[i];
    }
    delete[] lab;
    delete[] path;
}
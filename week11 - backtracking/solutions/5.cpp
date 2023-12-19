#include <iostream>
#include <cstring>
#include <cassert>

bool outOfBounds(int x, int y, int n, int m)
{
    return x < 0 || x >= n || y < 0 || y >= m;
}

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

enum MazeValues
{
    Obsticle = -1,
    EmptySquare,
    Starting,
    Ending
};

void findAllEulerianPaths(int **grid, int n, int m, int x, int y, char *path, int &pathIndex, char **allPaths, int &pathsNumber, bool **visited, int &numberOfVisited)
{
    if (outOfBounds(x, y, n, m) || visited[x][y])
    {
        return;
    }
    if (grid[x][y] == Ending)
    {
        if (n * m - 1 == numberOfVisited)
        {
            path[pathIndex] = '\0';
            allPaths[pathsNumber] = new char[pathIndex + 1];
            strcpy(allPaths[pathsNumber++], path);
        }
        return;
    }

    // mark as visited
    visited[x][y] = true;
    numberOfVisited++;

    for (size_t i = 0; i < 4; i++)
    {
        path[pathIndex++] = x + dx[i] + '0';
        path[pathIndex++] = y + dy[i] + '0';
        findAllEulerianPaths(grid, n, m, x + dx[i], y + dy[i], path, pathIndex, allPaths, pathsNumber, visited, numberOfVisited);
        // backtrack
        pathIndex -= 2;
    }

    // backtrack
    visited[x][y] = false;
    numberOfVisited--;
}

void printPath(char *path)
{
    while (*path)
    {
        std::cout << "(" << *path++ << "," << *path++
                  << ")";
    }
    std::cout << '\n';
}

/*
3 4
1 0 0 0
0 0 0 0
0 0 2 -1
*/
int main()
{
    int n, m, startX, startY;
    std::cin >> n >> m;
    int **grid = new int *[n];
    bool **visited = new bool *[n];
    for (size_t i = 0; i < m; i++)
    {
        grid[i] = new int[m];
        visited[i] = new bool[m]{false};
    }
    int numberOfVisited = 0;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            std::cin >> grid[i][j];
            switch (grid[i][j])
            {
            case Starting:
                startX = i;
                startY = j;
                break;

            case Obsticle:
                visited[i][j] = true;
                numberOfVisited++;
                break;
            }
        }
    }

    char *path = new char[2 * n * m]{char(startX + '0'), char(startY + '0')};
    int pathIndex = 2;
    char **allPaths = new char *[n * m];
    int pathsNumber = 0;

    findAllEulerianPaths(grid, n, m, startX, startY, path, pathIndex, allPaths, pathsNumber, visited, numberOfVisited);

    for (size_t i = 0; i < pathsNumber; i++)
    {
        printPath(allPaths[i]);
    }

    // deletes...
}
/*
Даден е лабиринт под формата на матрица NxM, където свободно квадратче се 
отбелязва с ‘.’, а стена – с ‘-’. Намерете има ли път от квадратче 0x0 до квадратче (N- 
1)x(M-1), движейки се в четирите основни посоки. 
```
Пример: 
Вход: 
4 4 
. - - . 
. * - - // x = 1 y = 1, dx = 1, dy = 0 -> x = 2, y = 1
. & . . 
. . . . 
// (0,0) -> (1, 0) ->
Изход: 
Yes 
```
```
Вход: 
3 5 
. - - . . 
- . - - - 
. . . . . 
Изход: 
No 
```
*/

/*
Да минем през всички свободни клетки по веднъж
3 4
s---
----
--ex
Търсим? Всички такива възможни пътища вънати като масив
*/
#include <iostream>

bool outOfBounds(int x, int y, int n, int m)
{
    // return !(x >= 0 && x < n && y >= 0 && y < m);
    return x < 0 || x >= n || y < 0 || y >= m;
}

bool findPath(char **lab, int n, int m, int x, int y, int finalX, int finalY)
{
    if (outOfBounds(x, y, n, m) || lab[x][y] == '-')
    {
        return false;
    }
    if (x == finalX && y == finalY && lab[x][y] == '.')
    {
        return true;
    }

    lab[x][y] = '-';
    return (findPath(lab, n, m, x + 1, y, finalX, finalY) || findPath(lab, n, m, x - 1, y, finalX, finalY) || findPath(lab, n, m, x, y + 1, finalX, finalY) || findPath(lab, n, m, x, y - 1, finalX, finalY));
}

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
char direction[] = {'U', 'D', 'R', 'L'};

void findAllPaths(char **lab, int n, int m, int x, int y, int finalX, int finalY, char *path, int pathIndex)
{
    if (outOfBounds(x, y, n, m) || lab[x][y] == '-')
    {
        return;
    }
    if (x == finalX && y == finalY && lab[x][y] == '.')
    {
        path[pathIndex++] = '\0';
        std::cout << path << '\n';
        // pathIndex--;
        return;
    }

    lab[x][y] = '-';

    for (size_t i = 0; i < 4; i++)
    {
        path[pathIndex] = direction[i];
        findAllPaths(lab, n, m, x + dx[i], y + dy[i], finalX, finalY, path, pathIndex + 1);
    }

    // x = x + 1;
    // path[pathIndex++] = 'D';
    // findAllPaths(lab, n, m, x, y, finalX, finalY, path, pathIndex);
    // pathIndex--;
    // x = x - 1;

    // x = x - 1;
    // path[pathIndex++] = 'U';
    // findAllPaths(lab, n, m, x, y, finalX, finalY, path, pathIndex);
    // pathIndex--;
    // x = x + 1;

    // y = y - 1;
    // path[pathIndex++] = 'L';
    // findAllPaths(lab, n, m, x, y, finalX, finalY, path, pathIndex);
    // pathIndex--;
    // y = y + 1;

    // y = y + 1;
    // path[pathIndex++] = 'R';
    // findAllPaths(lab, n, m, x, y, finalX, finalY, path, pathIndex);
    // pathIndex--;
    // y = y - 1;

    lab[x][y] = '.';
}

#include <cassert>

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
    // std::cout << std::boolalpha << findPath(lab, n, m, startX, startY, finalX, finalY) << std::endl;
    findAllPaths(lab, n, m, startX, startY, finalX, finalY, path, 0);

    for (size_t i = 0; i < m; i++)
    {
        delete[] lab[i];
    }
    delete[] lab;
    delete[] path;
}
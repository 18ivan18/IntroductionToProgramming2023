#include <iostream>

bool isInside(int i, int j, int n, int m)
{
    return i >= 0 && j >= 0 && i < n && j < m;
}

// we can return the new matrix or change the old one
int **imageSmoother(int **img, int n, int m)
{
    int dx[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
    int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};
    int **tmp = new int *[n];
    for (size_t i = 0; i < n; i++)
    {
        tmp[i] = new int[m];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int sum = img[i][j], count = 1;
            for (int k = 0; k < 8; k++)
            {
                if (isInside(i + dx[k], j + dy[k], n, m))
                {
                    sum += img[i + dx[k]][j + dy[k]];
                    count++;
                }
            }
            tmp[i][j] = (sum / count);
        }
    }
    return tmp;
}

void print(int **matrix, int n, int m)
{
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << '\n';
    }
}

int main()
{
    const int size = 3;
    int row1[] = {100, 200, 100}, row2[] = {200, 50, 200}, row3[] = {100, 200, 100};
    int *matrix[] = {row1, row2, row3};
    int **smoothenedImage = imageSmoother(matrix, 3, 3);
    print(smoothenedImage, size, size);
    for (size_t i = 0; i < size; i++)
    {
        delete[] smoothenedImage[i];
    }
    delete[] smoothenedImage;
}
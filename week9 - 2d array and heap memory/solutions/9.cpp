#include <iostream>

void transpose(int **matrix, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int tmp = matrix[j][i];
            matrix[j][i] = matrix[i][j];
            matrix[i][j] = tmp;
        }
    }
}

void reflect(int **matrix, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n / 2; j++)
        {
            int tmp = matrix[i][j];
            matrix[i][j] = matrix[i][n - j - 1];
            matrix[i][n - j - 1] = tmp;
        }
    }
}

void rotate(int **matrix, int n)
{
    transpose(matrix, n);
    reflect(matrix, n);
}

void print(int **matrix, int n)
{
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << '\n';
    }
}

int main()
{
    int row1[] = {1, 2, 3}, row2[] = {4, 5, 6}, row3[] = {7, 8, 9};
    int *matrix[] = {row1, row2, row3};
    print(matrix, 3);
    rotate(matrix, 3);
    print(matrix, 3);
}
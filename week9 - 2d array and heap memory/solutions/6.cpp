#include <iostream>

void removeElement(int *&arr, int n, int k)
{
    int *newarr = new int[n - 1];
    for (int i = 0; i < k; i++)
    {
        newarr[i] = arr[i];
    }
    for (int i = k; i < n - 1; i++)
    {
        newarr[i] = arr[i + 1];
    }
    delete[] arr;
    arr = newarr;
}

void removeColumn(int **matrix, int n, int &m, int k)
{
    for (int i = 0; i < n; i++)
    {
        removeElement(matrix[i], m, k);
    }
    m--;
}

void print(int **matrix, int n, int m)
{
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main()
{
    int n, m;
    std::cin >> n >> m;
    const int colToDelete = 3;

    int **dynamicMatrix = new int *[n];
    for (size_t i = 0; i < n; i++)
    {
        dynamicMatrix[i] = new int[n];
    }

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            std::cin >> dynamicMatrix[i][j];
        }
    }

    removeColumn(dynamicMatrix, n, m, colToDelete);
    print(dynamicMatrix, n, m);
    removeColumn(dynamicMatrix, n, m, colToDelete);
    print(dynamicMatrix, n, m);
}
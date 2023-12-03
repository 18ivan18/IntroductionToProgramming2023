#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int matrix[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cin >> matrix[i][j];
        }
    }

    //под главния диагонал, включително в него
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i >= j)
            {
                std::cout << matrix[i][j] << " ";
            }
        }
        std::cout << "\n";
    }
    std::cout << std::endl;

    //над главния диагонал, без елементите в него
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i < j)
            {
                std::cout << matrix[i][j] << " ";
            }
        }
        std::cout << "\n";
    }
    std::cout << std::endl;

    //под второстепенния, без елементите по него
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i > n - j - 1)
            {
                std::cout << matrix[i][j] << " ";
            }
        }
        std::cout << "\n";
    }
    std::cout << std::endl;

    //над второстепенния, с елементите по него
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i <= n - j - 1)
            {
                std::cout << matrix[i][j] << " ";
            }
        }
        std::cout << "\n";
    }
    std::cout << std::endl;
    /*
    1 2 3
    4 5 6
    7 8 9
    */
}

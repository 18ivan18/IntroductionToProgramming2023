#include <iostream>

void copyArray(int *arr1, int *arr2, int n)
{
	for (int i = 0; i < n; i++)
	{
		arr1[i] = arr2[i];
	}
}

void removeRow(int **matrix, int n, int m, int k)
{
	for (int i = k; i < n - 1; i++)
	{
		copyArray(matrix[i], matrix[i + 1], m);
	}
	delete[] matrix[n - 1];
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
	int n;
	std::cin >> n;
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
	int removeRowNumber;

	std::cin >> removeRowNumber;

	removeRow(dynamicMatrix, n, n, removeRowNumber);
	print(dynamicMatrix, n - 1, n);
}
#include <iostream>

void spiralOrder(int **matrix, int row, int col)
{
    int count = 0;
    int total = row * col;

    //index initialization
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;

    while (count < total)
    {
        //printing starting row
        for (int index = startingCol; count < total && index <= endingCol; index++)
        {
            std::cout << matrix[startingRow][index];
            count++;
        }
        startingRow++;

        //printing ending column
        for (int index = startingRow; count < total && index <= endingRow; index++)
        {
            std::cout << matrix[index][endingCol];
            count++;
        }
        endingCol--;

        //printing ending row
        for (int index = endingCol; count < total && index >= startingCol; index--)
        {
            std::cout << matrix[endingRow][index];
            count++;
        }
        endingRow--;

        //printing starting column
        for (int index = endingRow; count < total && index >= startingRow; index--)
        {
            std::cout << matrix[index][startingCol];
            count++;
        }
        startingCol++;
    }
}

int main()
{
    int row1[] = {1, 2, 3}, row2[] = {4, 5, 6}, row3[] = {7, 8, 9};
    int *matrix[] = {row1, row2, row3};
    spiralOrder(matrix, 3, 3);
}
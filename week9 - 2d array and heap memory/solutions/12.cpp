bool isValid(char **board, int &row, int &col, char &c)
{
    for (int i = 0; i < 9; i++)
    {
        if (board[i][col] == c)
            return false; // checks if number already present in the col

        if (board[row][i] == c)
            return false; // checks if number already present in the row

        if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == c)
            return false; // checks the sub matrix od 3x3
    }
    return true;
}
bool solve(char **board, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (board[i][j] == '.')
            {
                for (char c = '1'; c <= '9'; c++)
                {
                    if (isValid(board, i, j, c)) // to check if the number can be placed in the given positon
                    {
                        board[i][j] = c;
                        if (solve(board, n, m))
                        {
                            return true;
                        } //prevents further recursion if a valid sudoko is found
                        else
                        {
                            board[i][j] = '.';
                        } // clearing the cell if that character doesn't make a valid sudoko
                    }
                }
                return false; // returns false if no number can be filled in the empty cell
            }
        }
    }
    return true; // it means all cells are filled and hence a valid sudoko
}

void solveSudoku(char **board)
{
    solve(board, 9, 9);
}

#include <iostream>

void print(char **matrix, int n, int m)
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
    char row1[] = {'5', '3', '.', '.', '7', '.', '.', '.', '.'}, row2[] = {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
         row3[] = {'.', '9', '8', '.', '.', '.', '.', '6', '.'}, row4[] = {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
         row5[] = {'4', '.', '.', '8', '.', '3', '.', '.', '1'}, row6[] = {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
         row7[] = {'.', '6', '.', '.', '.', '.', '2', '8', '.'}, row8[] = {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
         row9[] = {'.', '.', '.', '.', '8', '.', '.', '7', '9'};
    char *board[] = {row1, row2, row3, row4, row5, row6, row7, row8, row9};
    solveSudoku(board);
    print(board, 9, 9);
}
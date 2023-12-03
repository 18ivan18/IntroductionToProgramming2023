bool checkRows(int **board, int n, int m)
{
    //check all rows;
    for (int i = 0; i < 9; i++)
    {
        bool vis[10] = {false};
        for (int j = 0; j < 9; j++)
        {
            if (board[i][j] != '.')
            {
                int num = board[i][j] - '0';
                if (vis[num])
                {
                    return false;
                }
                vis[num] = true;
            }
        }
    }
    return true;
}
bool checkColumns(int **board, int n, int m)
{
    //check all columns;
    for (int j = 0; j < 9; j++)
    {
        bool vis[10] = {false};
        for (int i = 0; i < 9; i++)
        {
            if (board[i][j] != '.')
            {
                int num = board[i][j] - '0';
                if (vis[num])
                {
                    return false;
                }
                vis[num] = true;
            }
        }
    }
    return true;
}
bool checkSubmatrices(int **board, int n, int m)
{
    //check all submatrix;
    for (int k = 0; k < 3; k++)
    {
        int sr = k * 3;
        int sc = 0;
        for (int l = 0; l < 3; l++)
        {
            sc = l * 3;
            bool vis[10] = {false};
            for (int i = sr; i < sr + 3; i++)
            {
                for (int j = sc; j < sc + 3; j++)
                {
                    if (board[i][j] != '.')
                    {
                        int num = board[i][j] - '0';
                        if (vis[num])
                        {
                            return false;
                        }
                        vis[num] = true;
                    }
                }
            }
        }
    }
    return true;
}

bool isValidSudoku(int **board, int n, int m)
{
    return checkRows(board, n, m) && checkColumns(board, n, m) && checkSubmatrices(board, n, m);
}
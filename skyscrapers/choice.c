#include    <stdbool.h>
#include    "constraints.h"

bool solve(int input_constraints[4][4], int board[4][4], int row, int col)
{
    int num;

    if (row == 4)
    {
        return (true);
    }
    if (col == 4)
    {
        return (solve(input_constraints, board, row + 1, 0));
    }
    num = 1;
    while (num <= 4)
    {
        board[row][col] = num;
        if (is_valid_choice(input_constraints, board, row, col))
        {
            if (solve(input_constraints, board, row, col + 1))
            {
                return (true);
            }
        }
        num++;
    }
    board[row][col] = 0;
    return (false);
}

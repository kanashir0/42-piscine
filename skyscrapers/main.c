#include    <stdbool.h>
#include    <stdio.h>
#include    "utils.h"
#include    "choice.h"

int main(void)
{
    int input_constraints[4][4] = {
        {3, 2, 1, 2},
        {1, 2, 3, 2},
        {3, 2, 3, 1},
        {2, 3, 1, 2}
    };

    int board[4][4] = {0};

    if (solve(input_constraints, board, 0, 0))
    {
        print_board(board);
    }
    else
    {
       printf("no solution\n");
    }

    return (0);
}
#include    <stdio.h>

void    print_board(int board[4][4])
{
    int i;
    int j;

    i = 0;
    while (i < 4)
    {
        j = 0;
        while (j < 4)
        {
            printf("%d ", board[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
}
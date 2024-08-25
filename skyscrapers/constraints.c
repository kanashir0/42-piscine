#include    <stdbool.h>

bool unique_num_row_col(int board[4][4], int row, int col)
{
    int i;
    int j;

    i = 0;
    while (i < 4)
    {
        j = 0;
        while (j < 4)
        {
            if (board[row][col] == board[i][j] && ((i != row && j == col) || (i == row && j != col)))
            {
                return (false);
            }
            j++;
        }
        i++;
    }
    return (true);
}

bool is_up_clue_valid(int input_constraints[4][4], int board[4][4], int row, int col)
{
    int i;
    int up_constraint;
    int visible_buildings;
    int tallest_building;

    up_constraint = input_constraints[0][col];
    visible_buildings = 0;
    tallest_building = 0;
    i = 0;
    while (i < 4)
    {
        if (board[i][col] == 0)
        {
            return (true);
        }
        if (board[i][col] > tallest_building)
        {
            tallest_building = board[i][col];
            visible_buildings++;
        }
        i++;
    }
    if (visible_buildings == up_constraint)
    {
        return (true);
    }
    return (false);
}

bool is_down_clue_valid(int input_constraints[4][4], int board[4][4], int row, int col)
{
    int i;
    int down_constraint;
    int visible_buildings;
    int tallest_building;

    down_constraint = input_constraints[1][col];
    visible_buildings = 0;
    tallest_building = 0;
    i = 3;
    while (i >= 0)
    {
        if (board[i][col] == 0)
        {
            return (true);
        }
        if (board[i][col] > tallest_building)
        {
            tallest_building = board[i][col];
            visible_buildings++;
        }
        i--;
    }
    if (visible_buildings == down_constraint)
    {
        return (true);
    }
    return (false);
}

bool is_left_clue_valid(int input_constraints[4][4], int board[4][4], int row, int col)
{
    int i;
    int left_constraint;
    int visible_buildings;
    int tallest_building;

    left_constraint = input_constraints[2][row];
    visible_buildings = 0;
    tallest_building = 0;
    i = 0;
    while (i < 4)
    {
        if (board[row][i] == 0)
        {
            return (true);
        }
        if (board[row][i] > tallest_building)
        {
            tallest_building = board[row][i];
            visible_buildings++;
        }
        i++;
    }
    if (visible_buildings == left_constraint)
    {
        return (true);
    }
    return (false);
}

bool is_right_clue_valid(int input_constraints[4][4], int board[4][4], int row, int col)
{
    int i;
    int right_constraint;
    int visible_buildings;
    int tallest_building;

    right_constraint = input_constraints[3][row];
    visible_buildings = 0;
    tallest_building = 0;
    i = 3;
    while (i >= 0)
    {
        if (board[row][i] == 0)
        {
            return (true);
        }
        if (board[row][i] > tallest_building)
        {
            tallest_building = board[row][i];
            visible_buildings++;
        }
        i--;
    }
    if (visible_buildings == right_constraint)
    {
        return (true);
    }
    return (false);
}

bool is_valid_choice(int input_constraints[4][4], int board[4][4], int row, int col)
{
    if (!unique_num_row_col(board, row, col))
    {
        return (false);
    }
    if (!is_up_clue_valid(input_constraints, board, row, col))
    {
        return (false);
    }
    if (!is_down_clue_valid(input_constraints, board, row, col))
    {
        return (false);
    }
    if (!is_left_clue_valid(input_constraints, board, row, col))
    {
        return (false);
    }
    if (!is_right_clue_valid(input_constraints, board, row, col))
    {
        return (false);
    }
    return (true);
}


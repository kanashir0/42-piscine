/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <gyasuhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 13:17:41 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/08/25 18:46:27 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    <stdbool.h>
#include	<unistd.h>
#include    "utils.h"
#include    "choice.h"

void	initialize_board(int board[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
	return ;
}

bool	validate_input(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '4')
		{
			count++;
		}
		i++;
	}
	if (count == 16)
		return (true);
	else
		return (false);
}

void	initialize_params(int input_constraints[4][4], char *str)
{
	int	argv_index;
	int	arr_number;
	int	arr_index;

	argv_index = 0;
	arr_number = 0;
	arr_index = 0;
	while (str[argv_index] != '\0')
	{
		if (str[argv_index] >= '0' && str[argv_index] <= '4')
		{
			if (arr_index == 4)
			{
				arr_number++;
				arr_index = 0;
			}
			input_constraints[arr_number][arr_index] = str[argv_index] - '0';
			arr_index++;
		}
		argv_index++;
	}
}

int	main(int argc, char *argv[])
{
	int	board[4][4];
	int	input_constraints[4][4];

	(void)argc;
	if (validate_input(argv[1]))
		initialize_params(input_constraints, argv[1]);
	else
	{
		write(1, &"Invalid parameter, try again using exactly "
			"16 numbers between 1 and 4.\n", 72);
		return (0);
	}
	initialize_board(board);
	if (solve(input_constraints, board, 0, 0))
		print_board(board);
	else
		write(1, &"The given numbers does not have a solution.\n", 1);
	return (0);
}

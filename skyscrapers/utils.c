/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <gyasuhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 13:18:55 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/08/25 18:35:51 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	<stdbool.h>

void	print_number(int num)
{
	char	num_c;

	num_c = num + '0';
	write(1, &num_c, 1);
	write(1, &" ", 1);
	return ;
}

void	print_board(int board[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			print_number(board[i][j]);
			j++;
		}
		write(1, &"\n", 1);
		i++;
	}
}

bool	unique_num_row_col(int board[4][4], int row, int col)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (board[row][col] == board[i][j] &&
			((i != row && j == col) || (i == row && j != col)))
				return (false);
			j++;
		}
		i++;
	}
	return (true);
}

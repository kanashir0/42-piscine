/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choice.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <gyasuhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 12:59:25 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/08/25 19:18:47 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "constraints.h"

int	solve(int input_constraints[4][4], int board[4][4], int row, int col)
{
	int	num;

	if (row == 4)
		return (1);
	if (col == 4)
		return (solve(input_constraints, board, row + 1, 0) == 1);
	num = 1;
	while (num <= 4)
	{
		board[row][col] = num;
		if (is_valid_choice(input_constraints, board, row, col) == 1)
		{
			if (solve(input_constraints, board, row, col + 1) == 1)
				return (1);
		}
		num++;
	}
	board[row][col] = 0;
	return (0);
}

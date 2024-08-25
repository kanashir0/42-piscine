/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <gyasuhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 13:26:33 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/08/25 13:26:46 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

void	print_board(int board[4][4]);

bool	unique_num_row_col(int board[4][4], int row, int col);

#endif
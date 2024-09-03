/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <gyasuhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 12:48:18 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/09/03 19:39:45 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_answers
{
	int		x0;
	int		y0;
	int		xn;
	int		yn;
	int		size;
}			t_answers;

typedef struct s_chars
{
	char	empty;
	char	obstacle;
	char	full;
	int		n_lines;
}			t_chars;

void	process_map(char *filename);

char	**parse_map(char *raw_file, t_chars *chars);
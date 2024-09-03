/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <gyasuhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:01:41 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/09/03 20:00:49 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "bsq.h"

int	parse_lines(char *lines)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (lines[i] != '\0')
	{
		num = (num * 10) + (lines[i] - '0');
		i++;
	}
	return (num);
}

char	*get_metadata(char *raw_file, t_chars *chars)
{
	int		i;
	int		j;
	char	*char_lines;

	i = 0;
	while (raw_file[i] != '\n')
		i++;
	chars->full = raw_file[i - 1];
	chars->obstacle = raw_file[i - 2];
	chars->empty = raw_file[i - 3];
	char_lines = (char *) malloc((i - 2) * sizeof(char));
	j = 0;
	while (j < (i - 3))
	{
		char_lines[j] = raw_file[j];
		j++;
	}
	char_lines[j] = '\0';
	chars->n_lines = parse_lines(char_lines);
	free(char_lines);
	return (&raw_file[i + 1]);
}

char	**parse_map(char *raw_file, t_chars *chars)
{
	char	**map;
	chars = (t_chars *) malloc(sizeof(t_chars));
	char	*str = get_metadata(raw_file, chars);
	printf("full: %c\n", chars->full);
	printf("empty: %c\n", chars->empty);
	printf("obstacle: %c\n", chars->obstacle);
	printf("lines: %d\n", chars->n_lines);
	printf("%s", str);

	return (map);
}

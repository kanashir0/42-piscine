/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_input.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <gyasuhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 11:00:12 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/09/03 19:39:04 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "bsq.h"
#include <stdio.h>
#include <stdlib.h>

void	free_objects(t_chars *chars, char **map)
{
	for (int i = 0; i < chars->n_lines; i++)
		free(map[i]);
	free(map);
	free(chars);
	return ;
}

int	read_map_from_arg(char *filename, char *buffer)
{
	int		fd;
	int		size;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		write(1, &"Error while opening file\n", 26);
		return (0);
	}
	size = read(fd, buffer, 4096);
	if (size < 0)
	{
		write(1, &"Error while reading file\n", 26);
		return (0);
	}
	buffer[size] = '\0';
	return (1);
}

int	validate_map(char *map)
{
	/*
	◦ All lines must have the same length.
	◦ There’s at least one line of at least one box.
	◦ At each end of line, there’s a line break.
	◦ The characters on the map can only be those introduced in the first line.
	◦ The map is invalid if a character is missing from the first line, or if two characters (of empty, full and obstacle) are identical.
	◦ The characters can be any printable character, even numbers.
	◦ In case of an invalid map, your program should display map error on the error output followed by a line break. Your program will then move on to the next map.
	*/
	
	// Se um mapa não for valido precisamos printar um erro aqui.

	return (1);
}

void	process_map(char *filename)
{
	char		raw_file[4096];
	char		**map;
	t_answers	*answer;
	t_chars		*chars;

	read_map_from_arg(filename, raw_file);
	if (!validate_map(raw_file))
		return ;
	chars = (t_chars *) malloc(sizeof(t_chars));
	map = parse_map(raw_file, chars);
	answer = solve_map(map, chars);
	
	printf("%d\n", answer->size);
	// print_answers(map, answers, chars);
	// for (int i = 0; i < chars->n_lines; i++)
	// {
	// 	for (int j = 0; j < 20; j++)
	// 	{
	// 		printf("%c", map[i][j]);
	// 	}
	// 	printf("\n");
	// }
	free_objects(chars, map);
	return ;
}

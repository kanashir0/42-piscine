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
	t_answers	*answers;
	t_chars		*chars;

	read_map_from_arg(filename, raw_file);
	if (!validate_map(raw_file))
		return ;
	map = parse_map(raw_file, chars);
	// answers = solve_map(map, 0, 0, chars);
	// print_answers(map, answers, chars);
	return ;
}

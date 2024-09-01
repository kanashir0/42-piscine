/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   io.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <gyasuhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 19:22:19 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/09/01 20:25:13 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

char	*read_dict(char *buffer, int size, char *filename)
{
	int	bytesread;
	int	rows;
	int	i;
	int	file;

	rows = 0;
	i = 0;
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		write(1, "Error\n", 5);
		return (0);
	}
	bytesread = read(file, buffer, size);
	while (i < bytesread)
	{
		if (buffer[i] == '\n')
		{
			rows++;
		}
		i++;
	}
	close(file);
	return (buffer);
}

t_dict	*generate_dict(char *raw_dict, int i, int j, int k)
{
	t_dict	*dict;

	dict = (t_dict *)malloc(sizeof(t_dict) * count_lines(raw_dict));
	while (i < ft_strlen(raw_dict))
	{
		k = 0;
		while (raw_dict[i] != ':')
		{
			if (raw_dict[i] >= '0' && raw_dict[i] <= '9')
				dict[j].key[k++] = raw_dict[i];
			i++;
		}
		k = 0;
		i++;
		while (raw_dict[i] != '\n' && raw_dict[i] != '\0')
		{
			if (raw_dict[i] >= 33 && raw_dict[i] <= 126)
				dict[j].value[k++] = raw_dict[i];
			i++;
		}
		j++;
	}
	return (dict);
}

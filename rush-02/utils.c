/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <gyasuhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 19:19:25 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/09/01 19:44:11 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"
#include <stdlib.h>

int	count_lines(char *str)
{
	int	i;
	int	counter;

	i = 0;
	counter = 1;
	while (str[i])
	{
		if (str[i] == '\n')
			counter++;
		i++;
	}
	return (counter);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*invert_number(char *number)
{
	char	buffer;
	int		i;
	int		size;

	i = 0;
	size = ft_strlen(number);
	while (i < (size / 2))
	{
		buffer = number[i];
		number[i] = number[size - 1 - i];
		number[size - 1 - i] = buffer;
		i++;
	}
	return (number);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

char	*generate_searchable(int first_value, int zeros, int two_numbers)
{
	char	*searchable;
	int		i;

	if (!two_numbers)
	{
		searchable = (char *) malloc(zeros * sizeof(char) + 2);
		searchable[0] = first_value + '0';
		i = 1;
		while (i <= zeros)
		{
			searchable[i] = '0';
			i++;
		}
	}
	else
	{
		searchable = (char *) malloc(sizeof(char) * 3);
		searchable[0] = first_value + '0';
		searchable[1] = zeros + '0';
		i = 2;
	}
	searchable[i] = '\0';
	return (searchable);
}

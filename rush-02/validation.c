/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <gyasuhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 19:16:28 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/09/01 20:11:08 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"
#include <unistd.h>

int	is_number(char *argv, char *number)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	number[0] = '\0';
	while (argv[i])
	{
		if (argv[i] == '0' && number[0] == '\0')
		{
			counter++;
			i++;
			continue ;
		}
		else if (argv[i] >= '0' && argv[i] <= '9')
			number[i - counter] = argv[i];
		else
			return (0);
		i++;
	}
	return (1);
}

char	*validate_input(int argc, char *argv[], char *number)
{
	if (argc == 3)
	{
		if (is_number(argv[2], number))
			return (argv[1]);
		else
		{
			write(1, "Error\n", 6);
			return (0);
		}
	}
	else if (argc == 2)
	{
		if (is_number(argv[1], number))
			return ("./numbers.dict");
		else
		{
			write(1, "Error\n", 6);
			return (0);
		}
	}
	else
	{
		write(1, "Error\n", 6);
		return (0);
	}
}

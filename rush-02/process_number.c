/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_number.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <gyasuhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 19:25:53 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/09/01 20:46:16 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"
#include <stdlib.h>

int	handle_zero_mod(char *number, int index, t_dict *dict, int dict_size)
{
	char	c[2];
	char	*to_search;

	c[0] = number[index];
	c[1] = '\0';
	if (number[index] != '0')
		match(c, dict, dict_size);
	if (index != 0)
	{
		to_search = generate_searchable(1, index, 0);
		match(to_search, dict, dict_size);
		free(to_search);
	}
	return (index);
}

int	handle_one_mod(char *number, int index, t_dict *dict, int dict_size)
{
	char	*to_search;

	if (number[index] == '1')
	{
		to_search = generate_searchable(number[index] - '0',
				number[index - 1] - '0', 1);
		match(to_search, dict, dict_size);
		free(to_search);
		return (index - 1);
	}
	else if (number[index] != '0')
	{
		to_search = generate_searchable(number[index] - '0', 1, 0);
		match(to_search, dict, dict_size);
		free(to_search);
	}
	return (index);
}

int	handle_two_mod(char *number, int index, t_dict *dict, int dict_size)
{
	char	c[2];
	char	*to_search;

	c[0] = number[index];
	c[1] = '\0';
	if (number[index] != '0')
	{
		to_search = generate_searchable(1, 2, 0);
		match(c, dict, dict_size);
		match(to_search, dict, dict_size);
		free(to_search);
	}
	return (index);
}

int	print_number(char *number, int index, t_dict *dict, int dict_size)
{
	if (index % 3 == 0)
		return (handle_zero_mod(number, index, dict, dict_size));
	else if (index % 3 == 1)
		return (handle_one_mod(number, index, dict, dict_size));
	else if (index % 3 == 2)
		return (handle_two_mod(number, index, dict, dict_size));
	return (index);
}

void	process_number(char *number, t_dict *dict, int dict_size)
{
	int	i;

	number = invert_number(number);
	i = ft_strlen(number) - 1;
	while (i >= 0)
	{
		i = print_number(number, i, dict, dict_size);
		i--;
	}
	return ;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <gyasuhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 19:25:01 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/09/01 19:46:18 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return ;
}

void	match(char *to_match, t_dict *dict, int dict_size)
{
	int	i;

	i = 0;
	while (i < dict_size)
	{
		if (ft_strcmp(to_match, dict[i].key) == 0)
		{
			ft_putstr(dict[i].value);
			write(1, &" ", 1);
			return ;
		}
		i++;
	}
	ft_putstr("not matched");
	return ;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_number.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnascime <wnascime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 15:15:26 by wnascime          #+#    #+#             */
/*   Updated: 2024/08/31 15:52:13 by wnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	is_number(char *argv, char *number)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (argv[i] >= 48 && argv[i] <= 57)
			number[i] = argv[i];
		else
		{
			return (0);
		}
		i++;
	}
	return (1);

}

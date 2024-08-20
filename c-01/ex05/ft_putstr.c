/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 14:12:24 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/08/19 14:42:22 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putstr(char *str)
{
	char	letter;
	int		counter;

	letter = *str;
	counter = 1;
	while (letter != '\0')
	{
		write(1, &letter, 1);
		letter = *(str + counter);
		counter++;
	}
	return ;
}

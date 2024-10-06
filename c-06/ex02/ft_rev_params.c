/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 14:42:47 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/09/04 15:51:01 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	return ;
}

int	main(int argc, char *argv[])
{
	while (argc > 1)
	{
		ft_putstr(argv[argc - 1]);
		write(1, &"\n", 1);
		argc--;
	}
	return (0);
}

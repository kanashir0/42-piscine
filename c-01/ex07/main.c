/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:25:33 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/08/19 16:44:40 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_rev_int_tab.h"
#include	<stdio.h>

int	main(void)
{
	int	tab[5] = {10, 20, 30, 40, 50};
	int	size;
	int	i;

	size = 5;
	ft_rev_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	return (0);
}

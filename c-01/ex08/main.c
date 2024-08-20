/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 18:34:52 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/08/20 09:22:00 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_sort_int_tab.h"
#include	<stdio.h>

int	main(void)
{
	int	counter;
	int	array[5] = {30, 20, 50, 10, 40};

	counter = 0;
	while (counter < 5)
	{
		printf("%d ", array[counter]);
		counter++;
	}
	printf("\n");
	ft_sort_int_tab(array, 5);
	counter = 0;
	while (counter < 5)
	{
		printf("%d ", array[counter]);
		counter++;
	}
	printf("\n");
	return (0);
}

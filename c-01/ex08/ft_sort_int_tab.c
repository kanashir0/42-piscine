/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <gyasuhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:09:18 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/08/30 17:39:56 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	buffer;

	i = 0;
	j = 0;
	while (i < size)
	{
		while (j < (size - 1 - i))
		{
			if (tab[j] > tab[j + 1])
			{
				buffer = tab[j + 1];
				tab[j + 1] = tab[j];
				tab[j] = buffer;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return ;
}

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
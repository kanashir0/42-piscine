/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 14:05:33 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/09/05 16:22:34 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	i;

	ptr = NULL;
	if (min >= max)
		return (ptr);
	ptr = (int *) malloc((max - min) * sizeof(int));
	i = 0;
	while (max > min)
	{
		ptr[i] = max - 1;
		i++;
		max--;
	}
	return (ptr);
}
/*
#include <stdio.h>
int main(void)
{
	int *arr;
	int i;
	int min;
	int max;

	min = -5;
	max = 20;
	arr = ft_range(min, max);
	i = 0;
	while (i < (max - min))
	{
		printf("%d ", arr[i]);
		i++;
	}
	return (0);
}*/

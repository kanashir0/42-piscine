/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 16:25:24 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/09/05 17:07:59 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
		return (0);
	range = (int **) malloc((max - min) * sizeof(int));
	i = 0;
	while (min < max)
	{
		range[i] = &min;
		i++;
		min++;
	}
	return (i);
}

#include <stdio.h>
int	main(void)
{
	int	range_size;
	int	**range = 0;
	int	min;
	int	max;

	min = 10;
	max = 20;
	range_size = ft_ultimate_range(range, min, max);
	printf("size: %d\n", range_size);
	return (0);
}

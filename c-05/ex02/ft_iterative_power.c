/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 10:56:22 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/09/05 12:15:53 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	num;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	num = nb;
	while (power > 1)
	{
		nb *= num;
		power--;
	}
	return (nb);
}
/*
#include <stdio.h>
int	main(void)
{
	int	num;

	num = ft_iterative_power(10, 3);
	printf("num: %d\n", num);
	return (0);
}*/

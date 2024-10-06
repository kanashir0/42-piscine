/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 18:10:45 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/09/05 11:43:05 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_divisor(int nb, int i)
{
	if (nb == 2)
		return (1);
	if (nb < 2)
		return (0);
	if (nb % i == 0)
		return (0);
	if (i * i > nb || i == 46340)
		return (1);
	return (check_divisor(nb, i + 1));
}

int	ft_is_prime(int nb)
{
	return (check_divisor(nb, 2));
}
/*
#include <stdio.h>
int	main(void)
{
	int	p;

	p = ft_is_prime(2147483647);
	printf("p: %d\n", p);
	return (0);
}*/

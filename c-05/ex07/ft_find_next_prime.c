/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 11:45:05 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/09/05 12:07:14 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_prime(int nb, int i)
{
	if (nb == 2)
		return (1);
	if (nb < 2)
		return (0);
	if (nb % i == 0)
		return (0);
	if (i * i > nb || i == 46340)
		return (1);
	return (is_prime(nb, i + 1));
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (0);
	while (is_prime(nb, 2) == 0 && nb < 2147483647)
		nb++;
	return (nb);
}
/*
#include <stdio.h>
int	main(void)
{
	int	next;

	next = ft_find_next_prime(2147483544);
	printf("next prime: %d\n", next);
	return (0);
}*/

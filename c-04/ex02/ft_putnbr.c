/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 10:26:18 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/08/29 11:33:12 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_number(int nb)
{
	char	to_print;

	if (nb > 9)
		print_number(nb / 10);
	to_print = nb % 10 + '0';
	write(1, &to_print, 1);
	return ;
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, &"-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, &"-", 1);
		nb *= -1;
	}
	print_number(nb);
	return ;
}
/*
int	main(void)
{
	ft_putnbr(-2147483648);
	return (0);
}*/

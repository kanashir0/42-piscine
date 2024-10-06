/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <gyasuhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:41:56 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/09/03 16:19:20 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	get_base(char *base)
{
	int	i;
	int	j;

	if (*base == '\0')
		return (-1);
	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (-1);
			j++;
		}
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
			return (-1);
		else if (base[i] >= 9 && base[i] <= 13)
			return (-1);
		i++;
	}
	return (i);
}

void	handle_negative(int *nbr, long *nbr_long)
{
	*nbr_long = *nbr;
	if (*nbr_long < 0)
	{
		write(1, &"-", 1);
		*nbr_long *= -1;
	}
	return ;
}

void	print_number(long nbr_long, char *base, int base_int)
{
	char	to_print;

	if (nbr_long >= base_int)
		print_number((nbr_long / base_int), base, base_int);
	to_print = base[nbr_long % base_int];
	write(1, &to_print, 1);
	return ;
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_int;
	long	nbr_long;

	base_int = get_base(base);
	handle_negative(&nbr, &nbr_long);
	if (base_int < 2)
		return ;
	print_number(nbr_long, base, base_int);
	return ;
}

#include <stdio.h>
int	main(void)
{
	int	nbr = 256;
	char	*base = "poneyvif";
	ft_putnbr_base(nbr, base);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 10:00:43 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/08/28 11:18:52 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	int_to_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0' && base[i] != c)
		i++;
	if (base[i] == c)
		return (i);
	return (-1);
}

char	*get_signal(int *negative, char *str)
{
	int	signal;

	signal = 1;
	while (*str)
	{
		if (*str == '+' || *str == ' ')
			str++;
		else if (*str == '-')
		{
			*negative *= -1;
			str++;
		}
		else
			return (str);
	}
	return (str);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	x;
	int	num;
	int	negative;
	int	base_int;

	i = 0;
	num = 0;
	negative = 1;
	str = get_signal(&negative, str);
	base_int = get_base(base);
	if (base_int < 2)
		return (0);
	while (str[i] != '\0')
	{
		x = int_to_base(str[i], base);
		if (x < 0)
			return (num * negative);
		num = (num * base_int) + x;
		i++;
	}
	return (num * negative);
}
/*
#include <stdio.h>
int	main(void)
{
	int	n;
	char	*str = "  ---+--fa";
	char	*base = "abcdefghij";

	n = ft_atoi_base(str, base);
	printf("n: %d", n);
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:03:56 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/08/26 10:08:50 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include	<stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	int	x;
	char	str[] = "1234";

	x = ft_str_is_numeric(str);
	printf("%d\n", x);
	return (0);
}*/

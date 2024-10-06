/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:22:42 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/08/29 11:47:13 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign_flag;
	int	num;

	i = 0;
	sign_flag = 1;
	num = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-' && num == 0)
			sign_flag *= -1;
		else if (num == 0 && (str[i] == '+' || str[i] == ' '
				|| (str[i] >= 9 && str[i] <= 13)))
		{
			i++;
			continue ;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			num = (num * 10) + (str[i] - '0');
		else
			return (num * sign_flag);
		i++;
	}
	return (num * sign_flag);
}
/*
#include <stdio.h>
int	main(void)
{
	int	i;
	char	*str = "  ---+--+120034ab567";

	i = ft_atoi(str);
	printf("i: %d", i);
	return (0);
}*/

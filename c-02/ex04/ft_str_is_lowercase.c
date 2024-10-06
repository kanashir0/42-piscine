/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:03:56 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/08/26 10:10:45 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include	<stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	int	x;
	char	*str = "abcde";

	x = ft_str_is_lowercase(str);
	printf("%d\n", x);
	return (0);
}*/

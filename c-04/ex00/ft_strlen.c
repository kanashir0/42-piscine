/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 10:15:47 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/08/28 18:25:13 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
#include	<stdio.h>
int	main(void)
{
	int	c;
	char	*str = "pizza de feijao";

	c = ft_strlen(str);
	printf("len: %d", c);
	return (0);
}*/

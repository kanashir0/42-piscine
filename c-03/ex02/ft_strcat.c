/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 10:38:19 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/08/27 09:37:35 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_size;

	dest_size = 0;
	while (dest[dest_size] != '\0')
	{
		dest_size++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (dest);
}
/*
#include	<stdio.h>
int	main(void)
{
	char	*src = "sem caroco eh melhor";
	char	dest[50] = "azeitona ";

	ft_strcat(dest, src);
	printf("Concatened string: %s", dest);
	return (0);
}*/

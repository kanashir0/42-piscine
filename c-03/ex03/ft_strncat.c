/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 11:09:56 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/08/27 09:57:07 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_size;
	unsigned int	i;

	dest_size = 0;
	while (dest[dest_size] != '\0')
		dest_size++;
	i = 0;
	while (src[i] != '\0' && i < nb)
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
	char		*src = "eh o melhor de todos";
	char		dest[50] = "arroz japones ";
	unsigned int	nb = 8;

	ft_strncat(dest, src, nb);

	printf("Concatened string: %s", dest);
	return (0);
}*/

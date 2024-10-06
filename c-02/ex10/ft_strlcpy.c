/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 12:15:15 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/08/27 09:13:03 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include	<stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	l_src;

	l_src = 0;
	while (src[l_src] != '\0')
		l_src++;
	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
	}	
	dest[i] = '\0';
	return (l_src);
}

int	main(void)
{
	unsigned int	i;

	char	*src = "Hello there!";

	char    dest[13];

	i = ft_strlcpy(dest, src, 5);
        printf("src: %s, dest: %s, i: %d\n", src, dest, i);
	return (0);
}

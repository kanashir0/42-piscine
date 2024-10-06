/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:00:28 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/08/22 09:42:22 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_strncpy.h"
#include	<stdio.h>

int	main(void)
{
	char		src[] = "ABCDE";
	char		dest[10];
	unsigned int	n = 8;
	int		i = 0;

	ft_strncpy(dest, src, n);
	
	while (dest[i] != '\0')
	{
		printf("%c", dest[i]);
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 12:45:40 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/08/21 18:43:58 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_strlcpy.h"
#include	<stdio.h>

int	main(void)
{
	unsigned int	i;
	
	char	src[] = "Hello there!";
	
	char	dest_bigger[20];
	char    dest_smaller[6];
	char    dest_exact[13];

	i = ft_strlcpy(dest_bigger, src, 20);
	printf("src: %s, dest: %s, %d\n", src, dest_bigger, i);
	
	i = ft_strlcpy(dest_smaller, src, 6);
        printf("src: %s, dest: %s, %d\n", src, dest_smaller, i);
	
	i = ft_strlcpy(dest_exact, src, 13);
        printf("src: %s, dest: %s, %d\n", src, dest_exact, i);
	return (0);
}

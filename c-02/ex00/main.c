/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 10:59:10 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/08/21 19:20:01 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_strcpy.h"
#include	<stdio.h>

int	main(void)
{
	char	src[] = "ABCD";
	char	dest[20];

	ft_strcpy(dest, src);

	printf("Src [%s] | Dest: %s\n", src, dest);
	return (0);
}

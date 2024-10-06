/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 11:16:19 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/08/22 11:21:04 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_strncat.h"
#include	<stdio.h>

int	main(void)
{
	char		*src = "eh o melhor de todos";
	char		dest[50] = "arroz japones ";
	unsigned int	nb = 40;

	ft_strncat(dest, src, nb);

	printf("Concatened string: %s", dest);
	return (0);
}

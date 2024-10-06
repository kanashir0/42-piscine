/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 10:20:16 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/08/22 10:34:05 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_strncmp.h"
#include	<stdio.h>

int	main(void)
{
	int		r;
	unsigned int 	n = 5;
	char		*s1 = "saladinha";
	char		*s2 = "saladinhaaaaaaaa";

	r = ft_strncmp(s1, s2, n);
	printf("r: %d\n", r);
	return (0);
}

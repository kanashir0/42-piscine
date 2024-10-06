/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 09:53:37 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/08/22 10:18:10 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_strcmp.h"
#include	<stdio.h>

int	main(void)
{
	int	r;
	char	*s1 = "saladinha";
	char	*s2 = "saladinhaaa";

	r = ft_strcmp(s1, s2);

	printf("r: %d\n", r);
	return (0);
}

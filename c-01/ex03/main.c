/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:51:46 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/08/19 12:02:22 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_div_mod.h"
#include	<stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 11;
	b = 5;
	ft_div_mod(a, b, &div, &mod);
	printf("a: %d, b: %d, div: %d, mod: %d", a, b, div, mod);
	return (0);
}

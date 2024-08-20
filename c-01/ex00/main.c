/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 12:26:02 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/08/18 13:06:37 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_ft.h"
#include	<stdio.h>

int	main(void)
{
	int	numero;

	numero = 30;
	printf("raw n: %d\n", numero);
	ft_ft(&numero);
	printf("proc n: %d\n", numero);
}

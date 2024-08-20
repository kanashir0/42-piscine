/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 13:18:15 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/08/19 14:36:51 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_ultimate_ft.h"
#include	<stdio.h>

int	main(void)
{
	int				numero;
	int*			ptr1;
	int**			ptr2;
	int***			ptr3;
	int****			ptr4;
	int*****		ptr5;
	int******		ptr6;
	int*******		ptr7;
	int********		ptr8;

	numero = 30;
	ptr1 = &numero;
	ptr2 = &ptr1;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	ft_ultimate_ft(&ptr8);
	printf("n: %d", numero);
}

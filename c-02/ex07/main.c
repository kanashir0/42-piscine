/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:59:32 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/08/21 18:20:51 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_strupcase.h"
#include	<stdio.h>

int	main(void)
{
	char	lower[] = "abcdef";
	char    upper[] = "abCDEf";
	char    number[] = "ab42ef";
	
	ft_strupcase(lower);
	ft_strupcase(upper);
	ft_strupcase(number);

	printf("lower: %s\n", lower);
	printf("upper: %s\n", upper);
	printf("number: %s\n", number);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:59:32 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/08/21 18:25:10 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_strlowcase.h"
#include	<stdio.h>

int	main(void)
{
	char	upper[] = "ABCDE";
	char    lower[] = "AbcdE";
	char    number[] = "A42DE";

	ft_strlowcase(upper);
	ft_strlowcase(lower);
	ft_strlowcase(number);

	printf("Upper: %s\n", upper);
	printf("Lower: %s\n", lower);
	printf("Number: %s\n", number);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 17:54:03 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/08/20 18:48:46 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_str_is_printable.h"
#include	<stdio.h>

int	main(void)
{
	int	x;
	char	str[] = "asd\tasd";

	x = ft_str_is_printable(str);
	printf("%d\n", x);
	return (0);
}

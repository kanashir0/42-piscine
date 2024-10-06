/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 17:54:03 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/08/22 19:14:28 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_str_is_alpha.h"
#include	<stdio.h>

int	main(void)
{
	int	x;
	char	str[] = "obaAoAosdn";

	x = ft_str_is_alpha(str);
	printf("%d\n", x);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 14:29:50 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/08/20 10:01:00 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_strlen.h"
#include	<stdio.h>

int	main(void)
{
	int	count;
	char	str[17] = "alface americana";

	count = ft_strlen(str);
	printf("len: %d", count);
	return (0);
}

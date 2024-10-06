/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 10:45:51 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/08/22 10:50:50 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_strcat.h"
#include	<stdio.h>

int	main(void)
{
	char	*src = "sem caroco eh melhor";
	char	dest[50] = "azeitona ";

	ft_strcat(dest, src);
	printf("Concatened string: %s", dest);
	return (0);
}

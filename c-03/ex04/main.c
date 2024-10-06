/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 14:52:46 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/08/22 19:38:05 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_strstr.h"
#include	<stdio.h>

int	main(void)
{
	char	*str = "o rato roeu a roupa do rei de roma";
	char	*substr = "alagoas";
	char	*found;

	found = ft_strstr(str, substr);
	printf("Found: %s", found);
	return (0);
}

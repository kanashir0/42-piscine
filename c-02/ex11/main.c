/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:25:05 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/08/21 19:04:50 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_putstr_non_printable.h"

int	main(void)
{
	char	str[] = "Oi\nvoce esta bem?";
	ft_putstr_non_printable(str);
	return (0);
}

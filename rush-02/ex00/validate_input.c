/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnascime <wnascime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 15:10:47 by wnascime          #+#    #+#             */
/*   Updated: 2024/08/31 15:40:36 by wnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*validate_input(int argc, char *argv[], char *number)
{
	if (argc == 3)
	{
		is_number(argv[2], number);
		return (argv[1]);
	}
	else if (argc == 2)
	{
		is_number(argv[1], number);
		return ("./numbers.dict");
	}
	else
	{
		return (0);
	}
	return ("./numbers.dict");

}

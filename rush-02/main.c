/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <gyasuhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 19:03:40 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/09/01 20:31:21 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"
#include <stdio.h>
#include <stdlib.h>

void	initiate_processing(char *raw_dict, char *number)
{
	t_dict	*dict;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	dict = generate_dict(raw_dict, i, j, k);
	process_number(number, dict, count_lines(raw_dict));
	free(dict);
	return ;
}

// int main(void)
int	main(int argc, char *argv[])
{
	char	*filename;
	char	*raw_dict;
	char	buffer[4096];
	char	number[256];

	filename = validate_input(argc, argv, number);
	if (!filename)
		return (0);
	raw_dict = read_dict(buffer, 4096, filename);
	initiate_processing(raw_dict, number);
	return (0);
}

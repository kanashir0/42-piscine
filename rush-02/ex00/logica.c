/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logica.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnascime <wnascime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 13:34:14 by wnascime          #+#    #+#             */
/*   Updated: 2024/08/31 16:12:01 by wnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "rush02.h"

#define MAX_BUFF 4096

int	main(int argc, char *argv[])
{
	char	*filename;
	char	*raw_file[4096];
	char	number[MAX_BUFF];
	int		dict_lines;
	int		dict_size;
	//s_dict	*dict;

	// Validar input
	filename = validate_input(argc, argv, number);
	if (!filename)
	{
		write (1, "É true", 6);
		// Erro, input invalido, finalizar o programa
	}
	if (filename)
	{
		write (1, "É true\n", 6);
		// Erro, input invalido, finalizar o programa
	}
	
	//dict = parse_dict(filename, dict, raw_file, dict_lines, dict_size);
	//if (!dict) // Pensar em como fazer essa validação
	//{
		// Erro, dicionario invalido, finalizar o programa
	//}
	//print_number(number, dict);
	//return (0);
}

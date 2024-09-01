/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <gyasuhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 19:04:49 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/09/01 20:25:33 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

typedef struct s_dict
{
	char	key[256];
	char	value[256];
}			t_dict;

char	*validate_input(int argc, char *argv[], char *number);

int		is_number(char *argv, char *number);

t_dict	*generate_dict(char *raw_dict, int i, int j, int k);

char	*read_dict(char *buffer, int size, char *filename);

void	process_number(char *number, t_dict *dict, int dict_size);

int		print_number(char *number, int index, t_dict *dict, int dict_size);

int		handle_two_mod(char *number, int index, t_dict *dict, int dict_size);

int		handle_one_mod(char *number, int index, t_dict *dict, int dict_size);

int		handle_zero_mod(char *number, int index, t_dict *dict, int dict_size);

char	*generate_searchable(int first_value, int zeros, int two_numbers);

void	match(char *to_match, t_dict *dict, int dict_size);

int		ft_strcmp(char *s1, char *s2);

char	*invert_number(char *number);

int		ft_strlen(char *str);

int		count_lines(char *str);

void	ft_putstr(char *str);

void	initiate_processing(char *raw_dict, char *number);

#endif
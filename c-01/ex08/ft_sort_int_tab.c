/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:09:18 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/08/20 09:19:24 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	buffer;

	i = 0;
	j = 0;
	while (i < size)
	{
		while (j < (size - 1 - i))
		{
			if (tab[j] > tab[j + 1])
			{
				buffer = tab[j + 1];
				tab[j + 1] = tab[j];
				tab[j] = buffer;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return ;
}

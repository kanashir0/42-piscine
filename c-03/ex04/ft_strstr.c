/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <gyasuhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 19:22:17 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/08/28 11:38:41 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (*to_find == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j]
			&& str[i + j] != '\0' && to_find[j] != '\0')
		{
			j++;
		}
		if (to_find[j] == '\0')
			return (&str[i]);
		if (str[i + j] == '\0')
			return (0);
		i++;
	}
	return (0);
}
/*
#include	<stdio.h>
int	main(void)
{
	char	*str = "o rato roeu a roupa do rei de roma";
	char	*substr = "rei";
	char	*found;

	found = ft_strstr(str, substr);
	printf("Found: %s", found);
	return (0);
}*/

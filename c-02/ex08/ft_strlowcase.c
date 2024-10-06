/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:57:02 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/08/26 10:20:34 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include	<stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char    str[] = "peID0 DE oS7r4";

	ft_strlowcase(str);

	printf("Lower str: %s\n", str);
	return (0);
}*/

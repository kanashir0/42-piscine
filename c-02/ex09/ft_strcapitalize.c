/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 09:59:17 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/08/26 11:31:21 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include	<stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (str[i] != '\0')
	{
		if (flag == 1)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			flag = 0;
		}
		if (str[i] < '0')
			flag = 1;
		else if (str[i] > '9' && str[i] < 'A')
			flag = 1;
		else if (str[i] > 'Z' && str[i] < 'a')
			flag = 1;
		else if (str[i] > 'z')
			flag = 1;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";

	ft_strcapitalize(str);
	printf("Capitalized str: %s", str);
	return (0);
}*/

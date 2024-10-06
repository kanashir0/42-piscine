/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 14:13:12 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/08/26 09:58:08 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include        <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	if (src[i] == '\0')
	{
		while (dest[i] != '\0' && i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}
/*
int     main(void)
{
        char            *src = "ABCDE";
        char            dest[6];
        unsigned int    n = 3;
        int             i = 0;

        ft_strncpy(dest, src, n);

        while (dest[i] != '\0')
        {
                printf("%c", dest[i]);
                i++;
        }
        return (0);
}*/

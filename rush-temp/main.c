/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 12:26:12 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/08/18 17:14:30 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<math.h>

void	rush(int x, int y);

void	identify_params(char **argv);

int	main(int argc, char **argv)
{
	char	cx;
	char	cy;
	int	x;
	int	y;

	printf("p1: %s | p2: %s | p3: %s\n", argv[0], argv[1], argv[2]);

	cx = *argv[1];
	cy = *argv[2];

	x = cx - '0';
	y = cy - '0';

	printf("x: %d | y: %d\n", x, y);

	identify_params(argv);
	//rush(x, y);
	return (0);
}

void	identify_params(char **argv)
{
	char	cx;
	char	cy;
	int	x;
	int	y;
	int	x_size;
	int	y_size;
	int	counter;

	x_size = 0;
	y_size = 0;

	cx = *argv[1]; // ./a.out 123\0 42\0

	counter = 1;
	while (cx != '\0')
	{
		printf("cx: %c\n", cx);
		cx = &argv[1] + counter;
		counter++;
		x_size++;
		printf("cx: %c, counter: %d, x_size: %d", cx, counter, x_size);		
	}

	//while (cy != '\0')
        //{
        //        y_size++;
        //}
	
	counter = 1;
	while (cx != '\0')
	{
		printf("cx: %c | x_size: %d | counter: %d", cx, x_size, counter);
		x += ((cx - '0') * (10^(x_size - 1)));
		// 0x23 0x24
		cx = *(argv[1] + counter);
		x_size--;
	}
}

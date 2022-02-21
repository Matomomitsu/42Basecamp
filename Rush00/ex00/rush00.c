/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtomomit <mtomomit@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 16:33:53 by mtomomit          #+#    #+#             */
/*   Updated: 2022/02/07 14:54:01 by mtomomit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	extremities(int x, int y, int h, int *w)
{
	if ((*w == 1) && (h == 1))
	{
		ft_putchar('o');
		*w = *w + 1;
	}
	if ((*w == 1) && (h == y))
	{
		ft_putchar('o');
		*w = *w + 1;
	}
	if ((*w == x) && (h == y))
	{
		ft_putchar('o');
		*w = *w + 1;
	}
	if ((*w == x) && (h == 1))
	{
		ft_putchar('o');
		*w = *w + 1;
	}
}

void	lines(int x, int y, int h, int *w)
{
	if ((*w == 1) && (1 < h && h < y))
	{
		ft_putchar('|');
		*w = *w + 1;
	}
	if ((1 < *w && *w < x) && (h == 1))
	{
		ft_putchar('-');
		*w = *w + 1;
	}
	if ((1 < *w && *w < x) && (h == y))
	{
		ft_putchar('-');
		*w = *w + 1;
	}
	if ((*w == x) && (1 < h && h < y))
	{
		ft_putchar('|');
		*w = *w + 1;
	}
}

void	rush(int x, int y)
{
	int	height;
	int	width;

	width = 1;
	height = 1;
	while (height <= y)
	{
		while (width <= x)
		{
			if ((1 < height && height < y) && (1 < width && width < x))
			{
				ft_putchar(' ');
				width++;
			}
			extremities(x, y, height, &width);
			lines(x, y, height, &width);
		}
		ft_putchar('\n');
		width = 1;
		height++;
	}
}

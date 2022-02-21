/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtomomit <mtomomit@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 19:42:33 by mtomomit          #+#    #+#             */
/*   Updated: 2022/02/18 01:23:59 by mtomomit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	number;

	if (nb < 0)
	{
		number = nb * -1;
		ft_putchar('-');
	}
	else
	{
		number = nb;
	}
	if (number >= 10)
	{
		ft_putnbr(number / 10);
		ft_putnbr(number % 10);
	}
	else
	{
		ft_putchar(number + 48);
	}
}

void	possibilities_first(int i)
{
	if (i < 10)
	{
		ft_putchar(48);
		ft_putnbr(i);
		ft_putchar(' ');
	}
	else
	{
		ft_putnbr(i);
		ft_putchar(' ');
	}
}

void	possibilities_second(int j, int i)
{
	if (j < 10)
	{
		ft_putchar(48);
		ft_putnbr(j);
		write(1, ", ", 2);
	}
	else
	{
		if (j == 99 && i == 98)
		{
			ft_putnbr(j);
		}
		else
		{
			ft_putnbr(j);
			write(1, ", ", 2);
		}	
	}	
}

void	ft_print_comb2(void)
{
	int	first_num;
	int	second_num;

	first_num = 0;
	while (first_num <= 99)
	{
		second_num = 0;
		while (second_num <= 99)
		{
			if (first_num < second_num)
			{
				possibilities_first(first_num);
				possibilities_second(second_num, first_num);
			}
		second_num++;
		}
	first_num++;
	}
}
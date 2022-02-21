/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtomomit <mtomomit@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:53:15 by mtomomit          #+#    #+#             */
/*   Updated: 2022/02/06 17:07:48 by mtomomit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_numbers(int first_num, int second_num, int third_num)
{
	ft_putchar(first_num);
	ft_putchar(second_num);
	ft_putchar(third_num);
	if (first_num == 55 && second_num == 56 && third_num == 57)
	{
	}
	else
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{	
	int	first_num;
	int	second_num;
	int	third_num;

	first_num = 48;
	while (first_num < 58)
	{
		second_num = first_num + 1;
		while (second_num < 58)
		{
			third_num = second_num + 1;
			while (third_num < 58)
			{
				print_numbers(first_num, second_num, third_num);
				third_num++;
			}
			second_num++;
		}
		first_num++;
	}
}

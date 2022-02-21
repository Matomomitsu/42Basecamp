/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtomomit <mtomomit@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:04:23 by mtomomit          #+#    #+#             */
/*   Updated: 2022/02/17 19:23:30 by mtomomit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	verification(char *base)
{
	int	i;
	int	o;

	i = 0;
	if (base[i] == '\0' || base[i + 1] == '\0')
		return (1);
	else
	{
		while (base[i] != '\0')
		{
			o = 1;
			while (base[i + o] != '\0')
			{
				if (base[i] == base[i + o] || base[i] == '+' || base[i] == '-')
				{
					return (1);
				}
				o++;
			}
			i++;
		}
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	number;
	unsigned int	i;

	i = ft_strlen(&base[0]);
	number = nbr;
	if (verification(&base[0]) == 1)
		number = nbr;
	else
	{
		if (nbr < 0)
		{
			number *= -1;
			ft_putchar('-');
		}
		if (number >= i)
		{
			ft_putnbr_base(number / i, &base[0]);
			ft_putnbr_base(number % i, &base[0]);
		}	
		else
			ft_putchar(base[nbr]);
	}
}

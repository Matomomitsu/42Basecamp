/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtomomit <mtomomit@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 21:10:45 by mtomomit          #+#    #+#             */
/*   Updated: 2022/02/19 02:48:27 by mtomomit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power == 0)
	{
		return (1);
	}
	if (power < 0)
	{
		return (0);
	}
	if (power == 1)
	{
		return (nb);
	}
	if (power > 1)
	{
		nb = ft_power(nb, power - 1) * i;
	}
	return (nb);
}

int	ft_sqrt(int nb)
{
	int	num1;
	int	num2;

	num1 = 0;
	num2 = 1;
	while ((nb < ft_power(num1, 2) && num1 <= 46340)
		|| (nb > ft_power(num2, 2) && num2 <= 46340))
	{
		num1++;
		num2++;
	}
	if (ft_power(num1, 2) == nb)
	{
		return (num1);
	}
	if (ft_power(num2, 2) == nb)
	{
		return (num2);
	}
	else
	{
		return (0);
	}
}

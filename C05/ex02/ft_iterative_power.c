/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtomomit <mtomomit@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 03:33:40 by mtomomit          #+#    #+#             */
/*   Updated: 2022/02/19 02:47:51 by mtomomit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
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
	power--;
	while (power > 0)
	{
		nb = nb * i;
		power--;
	}
	return (nb);
}
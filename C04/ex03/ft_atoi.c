/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtomomit <mtomomit@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 03:37:58 by mtomomit          #+#    #+#             */
/*   Updated: 2022/02/18 01:58:20 by mtomomit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	signal;
	int	i;
	unsigned int	nbr;

	i = 0;
	signal = 1;
	nbr = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
		{
			if(str[i] == '-')
				signal = signal * -1;
			i++;
		}
	while (str[i] >= 48 && str[i] <= 57)
		{
			nbr = (nbr * 10) + (str[i] - 48);
			i++;
		}
	return (signal * nbr);
}

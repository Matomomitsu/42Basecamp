/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtomomit <mtomomit@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:06:31 by mtomomit          #+#    #+#             */
/*   Updated: 2022/02/19 02:48:01 by mtomomit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
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
		nb = ft_recursive_power(nb, power - 1) * i;
	}
	return (nb);
}
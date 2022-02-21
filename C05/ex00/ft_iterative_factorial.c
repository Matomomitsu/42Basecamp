/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtomomit <mtomomit@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 18:40:46 by mtomomit          #+#    #+#             */
/*   Updated: 2022/02/19 03:33:01 by mtomomit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		nb = 1;
		return (nb);
	}
	i = nb - 1;
	while (i > 0)
	{
		nb = nb * i;
		i--;
	}
	return (nb);
}
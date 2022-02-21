/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtomomit <mtomomit@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 18:54:04 by mtomomit          #+#    #+#             */
/*   Updated: 2022/02/19 02:47:41 by mtomomit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		nb = 1;
		return (nb);
	}
	if (nb > 0)
	{
		nb = nb * ft_recursive_factorial(nb - 1);
	}
	return (nb);
}
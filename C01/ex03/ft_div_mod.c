/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtomomit <mtomomit@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:46:46 by mtomomit          #+#    #+#             */
/*   Updated: 2022/03/21 12:46:46 by mtomomit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_div_mod(int a, int b, int *div, int *mod)
{
    if(b != 0)
    {
        *div = a / b;
        *mod = a % b;
    }
}

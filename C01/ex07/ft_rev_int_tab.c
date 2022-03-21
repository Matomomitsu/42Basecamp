/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtomomit <mtomomit@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:53:55 by mtomomit          #+#    #+#             */
/*   Updated: 2022/03/21 12:53:55 by mtomomit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_rev_int_tab(int *tab, int size)
{
    int i;
    int n;
    int size;

    i = 0;
    n = size / 2;
    while(i < n)
    {
        temp = tab[i];
        tab[i] = tab[size - 1];
        tab[size - 1] = temp;
        i++;
        size--;
    }
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtomomit <mtomomit@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:58:08 by mtomomit          #+#    #+#             */
/*   Updated: 2022/03/21 12:58:08 by mtomomit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_sort_int_tab(int *tab, int size)
{
    int i;
    int temp;

    i = 0;
    size--;
    while(i <= size)
    {
        if(tab[i] > tab[i + 1])
        {
            temp = tab[i + 1];
            tab[i] = tab[i + 1];
            tab[i + 1] = temp;
            i = 0;
        }
        else
        {
            i++;
        }
    }
}

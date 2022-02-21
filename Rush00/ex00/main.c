/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpereira <bpereira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 16:30:35 by mtomomit          #+#    #+#             */
/*   Updated: 2022/02/06 23:25:43 by bpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	extremities(int x, int y, int h, int *w);
void	lines(int x, int y, int h, int *w);
void	rush(int x, int y);

int	main(void)
{
	rush (5, 3);
	return (0);
}

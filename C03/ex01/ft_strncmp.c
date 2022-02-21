/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtomomit <mtomomit@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:20:45 by mtomomit          #+#    #+#             */
/*   Updated: 2022/02/17 04:44:06 by mtomomit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (i < n - 1 && s1[i] != '\0')
	{
		if (s1[i] - s2[i] != 0)
		{
			return (s1[i] - s2[i]);
		}
		if (s1[i] - s2[i] == 0)
		{
			i++;
		}
	}
	return (s1[i] - s2[i]);
}

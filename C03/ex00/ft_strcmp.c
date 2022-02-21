/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtomomit <mtomomit@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 14:18:09 by mtomomit          #+#    #+#             */
/*   Updated: 2022/02/16 18:31:03 by mtomomit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
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
	if (s1[i] == s2[i])
	{
		return (0);
	}
	else
		return (s1[i] - s2[i]);
}

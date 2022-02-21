/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtomomit <mtomomit@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 20:03:54 by mtomomit          #+#    #+#             */
/*   Updated: 2022/02/16 18:52:25 by mtomomit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	o;
	int	i;

	i = 0;
	if (to_find[i] == '\0')
	{
		return (&str[i]);
	}
	while (str[i] != '\0')
	{
		o = 0;
		while (to_find[o] == str[i + o])
		{
			if (to_find[o + 1] == '\0')
			{
				return (&str[i]);
			}
			o++;
		}
		i++;
	}
	return (0);
}
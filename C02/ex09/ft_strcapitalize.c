/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtomomit <mtomomit@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:34:15 by mtomomit          #+#    #+#             */
/*   Updated: 2022/02/09 21:53:52 by mtomomit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			i++;
		}
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (str);
}

int	verification(char c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (verification(str[i - 1]) == 1)
			{
				i++;
			}
			else
			{
				str[i] = str[i] - 32;
				i++;
			}
		}
		else
		{
			i++;
		}
	}
	return (str);
}

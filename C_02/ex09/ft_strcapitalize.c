/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 00:41:00 by rabustam          #+#    #+#             */
/*   Updated: 2022/04/19 02:23:51 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str);
char	*ft_strlowcase(char *str);

char	*ft_strcapitalize(char *str)
{
	int	i;

	str = ft_strlowcase(str);
	i = 0;
	while (str[i])
	{
		if (str[i] < 'a' || str[i] > 'z')
			i++;
		else
		{
			if (str[i - 1] < 'a' || str[i - 1] > 'z')
			{
				if (str[i - 1] < 'A' || str[i - 1] > 'Z')
				{
					if (str[i - 1] < '0' || str[i - 1] > '9')
						str[i] = str[i] - 32;
				}
				i++;
			}
			else
				i++;
		}
	}
	return (str);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'A' || str[i] > 'Z')
			i++;
		else
		{
			str[i] = str[i] + 32;
			i++;
		}
	}
	return (str);
}

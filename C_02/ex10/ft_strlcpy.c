/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 17:20:52 by rabustam          #+#    #+#             */
/*   Updated: 2022/04/19 13:49:42 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int				ft_strlen(char *str);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	result;
	unsigned int	i;

	i = 0;
	result = ft_strlen(src);
	while (src[i] != '\0')
	{
		if (i < size && size > 0)
		{
			dest[i] = src[i];
		}
		dest[size] = '\0';
		i++;
	}
	return (result);
}

int	ft_strlen(char *str)
{
	int	result;

	result = 0;
	while (*str != '\0')
	{
		result++;
		str++;
	}
	return (result);
}

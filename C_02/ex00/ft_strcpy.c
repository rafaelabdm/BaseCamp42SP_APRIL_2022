/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 19:56:25 by rabustam          #+#    #+#             */
/*   Updated: 2022/04/17 00:43:47 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src);
int		ft_strlen(char *str);

char	*ft_strcpy(char *dest, char *src)
{
	int	i;
	int	size;

	i = 0;
	size = ft_strlen(src);
	while (i <= size)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
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

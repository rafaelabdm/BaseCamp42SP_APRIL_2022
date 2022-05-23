/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 17:12:29 by rabustam          #+#    #+#             */
/*   Updated: 2022/04/19 19:13:59 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	n = 0;
	while (dest[i] != '\0')
		i++;
	while (src[n] != '\0')
	{
		if (n == nb)
		{
			dest[i] = '\0';
			return (dest);
		}
		dest[i] = src[n];
		n++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

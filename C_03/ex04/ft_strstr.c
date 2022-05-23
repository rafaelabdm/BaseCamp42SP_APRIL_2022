/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 17:13:21 by rabustam          #+#    #+#             */
/*   Updated: 2022/04/20 01:21:38 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
int		ft_strlen(char *str);

char	*ft_strstr(char *str, char *to_find)
{
	int				i;
	unsigned int	size;

	i = 0;
	size = ft_strlen(to_find);
	if (to_find[i] == '\0')
		return (str);
	while (str[i])
	{
		if (ft_strncmp(&str[i], to_find, size) == 0)
		{
			str = &str[i];
			return (str);
		}
		i++;
	}
	return (0);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (i == n)
			return (0);
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 00:35:39 by rabustam          #+#    #+#             */
/*   Updated: 2022/04/17 00:46:27 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if ((*str < 'a' || *str > 'z'))
			return (0);
		else
			str++;
	}
	return (1);
}

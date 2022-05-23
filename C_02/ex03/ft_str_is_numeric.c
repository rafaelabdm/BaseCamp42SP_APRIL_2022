/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 00:34:38 by rabustam          #+#    #+#             */
/*   Updated: 2022/04/17 00:45:50 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if ((*str < '0' || *str > '9'))
			return (0);
		else
			str++;
	}
	return (1);
}

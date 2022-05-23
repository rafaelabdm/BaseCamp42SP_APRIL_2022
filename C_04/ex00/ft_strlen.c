/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 20:58:06 by rabustam          #+#    #+#             */
/*   Updated: 2022/04/20 17:56:33 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:21:22 by rabustam          #+#    #+#             */
/*   Updated: 2022/04/22 16:19:40 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	long int	result;

	result = nb / 2;
	while (result * result > nb)
	{
		result = result / 2;
	}
	while (result * result < nb)
	{
		result++;
		if (result * result > nb)
			return (0);
	}
	return (result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 18:00:11 by rabustam          #+#    #+#             */
/*   Updated: 2022/04/22 16:15:51 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power);

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power == 0)
		return (1);
	if (power < 0 || nb == 0)
		return (0);
	while (power > 1)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

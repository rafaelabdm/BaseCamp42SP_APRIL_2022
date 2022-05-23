/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 21:35:00 by rabustam          #+#    #+#             */
/*   Updated: 2022/04/22 18:24:59 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);

int	ft_is_prime(int nb)
{
	int	div;

	div = 2;
	if (nb == 0 || nb == 1)
		return (0);
	if (nb > 0)
	{
		while (div <= nb / 2)
		{
			if (nb % div == 0)
				return (0);
			div++;
		}
	}
	else
	{
		nb = nb * -1;
		while (div < nb / 2)
		{
			if (nb % div == 0)
				return (0);
			div++;
		}
	}
	return (1);
}

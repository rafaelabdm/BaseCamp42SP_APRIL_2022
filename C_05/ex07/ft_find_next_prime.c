/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 21:57:21 by rabustam          #+#    #+#             */
/*   Updated: 2022/04/22 18:22:28 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb);

int	ft_find_next_prime(int nb)
{
	int	div;

	div = 2;
	if (nb <= 0 || nb == 1)
		return (2);
	while (div <= nb / 2)
	{
		if (nb % div == 0)
			nb++;
		else
			div++;
	}
	return (nb);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 19:36:13 by rabustam          #+#    #+#             */
/*   Updated: 2022/04/12 17:48:04 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

void	ft_print_comb(void)
{
	int		comb[3];

	comb[0] = 48;
	comb[1] = 49;
	comb[2] = 50;
	while (comb[0] <= 54)
	{
		while (comb[1] <= 56)
		{
			while (comb[2] <= 57)
			{
				write(1, &comb[0], 1);
				write(1, &comb[1], 1);
				write(1, &comb[2], 1);
				write(1, ", ", 2);
				comb[2]++;
			}
			comb[1]++;
			comb[2] = comb[1] + 1;
		}
		comb[1] = comb[0] + 1;
		comb[0]++;
	}
	write(1, "789", 3);
}

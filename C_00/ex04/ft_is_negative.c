/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 16:53:36 by rabustam          #+#    #+#             */
/*   Updated: 2022/04/12 18:24:41 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int i);

void	ft_is_negative(int i)
{
	char	c;

	if (i >= 0)
	{
		c = 'P';
		write(1, &c, 1);
	}
	else
	{
		c = 'N';
		write(1, &c, 1);
	}
}

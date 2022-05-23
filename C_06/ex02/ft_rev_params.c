/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 23:54:07 by rabustam          #+#    #+#             */
/*   Updated: 2022/04/21 20:33:07 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_params(int argc, char **argv);

int	main(int argc, char **argv)
{
	ft_rev_params(argc, argv);
	return (0);
}

void	ft_rev_params(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = argc - 1;
	while (j > 0)
	{
		while (argv[j][i])
		{
			write(1, &argv[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		i = 0;
		j--;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 23:26:44 by rabustam          #+#    #+#             */
/*   Updated: 2022/04/21 20:32:23 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_params(int argc, char **argv);

int	main(int argc, char **argv)
{
	ft_print_params(argc, argv);
	return (0);
}

void	ft_print_params(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (j < argc)
	{
		while (argv[j][i])
		{
			write(1, &argv[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		i = 0;
		j++;
	}
}

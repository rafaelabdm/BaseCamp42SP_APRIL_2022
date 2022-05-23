/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 23:22:23 by rabustam          #+#    #+#             */
/*   Updated: 2022/04/21 20:31:44 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_program_name(char **argv);

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	while (i <= argc)
	{
		if (i == 0)
			ft_print_program_name(argv);
		i++;
	}
	return (0);
}

void	ft_print_program_name(char **argv)
{
	int	i;

	i = 0;
	while (argv[0][i])
	{
		write(1, &argv[0][i], 1);
		i++;
	}
}

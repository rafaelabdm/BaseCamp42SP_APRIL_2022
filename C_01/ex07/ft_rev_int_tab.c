/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 01:47:37 by rabustam          #+#    #+#             */
/*   Updated: 2022/04/15 14:34:41 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	stop;
	int	temp;

	i = 0;
	stop = size / 2;
	while (i < stop)
	{
		temp = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = temp;
		size--;
		i++;
	}
}

/* int main()
{
	int matriz[7];

	matriz[0] = 6;
	matriz[1] = 5;
	matriz[2] = 4;
	matriz[3] = 3;
	matriz[4] = 2;
	matriz[5] = 1;
	matriz[6] = 0;

	printf("Matriz[0]: %d\n", matriz[0]);
	printf("Matriz[1]: %d\n", matriz[1]);
	printf("Matriz[2]: %d\n", matriz[2]);
	printf("Matriz[3]: %d\n", matriz[3]);
	printf("Matriz[4]: %d\n", matriz[4]);
	printf("Matriz[5]: %d\n", matriz[5]);
	printf("Matriz[5]: %d\n", matriz[6]);
	printf("\n");
	int *ponteiro;
	ponteiro = &matriz[0];
	ft_rev_int_tab(ponteiro, 7);
	
	printf("Matriz[0]: %d\n", matriz[0]);
	printf("Matriz[1]: %d\n", matriz[1]);
	printf("Matriz[2]: %d\n", matriz[2]);
	printf("Matriz[3]: %d\n", matriz[3]);
	printf("Matriz[4]: %d\n", matriz[4]);
	printf("Matriz[5]: %d\n", matriz[5]);
	printf("Matriz[5]: %d\n", matriz[6]);

	return 0;
} */

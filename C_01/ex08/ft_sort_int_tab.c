/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 17:10:16 by rabustam          #+#    #+#             */
/*   Updated: 2022/04/14 21:42:59 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	last;
	int	temp;

	last = size - 1;
	i = 0;
	while (i < size)
	{
		while (i < last)
		{
			if (tab[i] <= tab[last])
				last--;
			else
			{
				temp = tab[i];
				tab[i] = tab[last];
				tab[last] = temp;
				last--;
			}
		}
		last = size - 1;
		i++;
	}
}

/* int main()
{
	int matriz[7];

	matriz[0] = 6;
	matriz[1] = 5;
	matriz[2] = 7;
	matriz[3] = 2;
	matriz[4] = 3;
	matriz[5] = 3;
	matriz[6] = 4;

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
	ft_sort_int_tab(ponteiro, 7);
	
	printf("Matriz[0]: %d\n", matriz[0]);
	printf("Matriz[1]: %d\n", matriz[1]);
	printf("Matriz[2]: %d\n", matriz[2]);
	printf("Matriz[3]: %d\n", matriz[3]);
	printf("Matriz[4]: %d\n", matriz[4]);
	printf("Matriz[5]: %d\n", matriz[5]);
	printf("Matriz[5]: %d\n", matriz[6]);

	return 0;
} */

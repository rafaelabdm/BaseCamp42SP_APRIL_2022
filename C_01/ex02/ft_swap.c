/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 22:31:07 by rabustam          #+#    #+#             */
/*   Updated: 2022/04/14 21:26:55 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int	*a, int	*b);

void	ft_swap(int	*a, int	*b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

/* int main(void)
{
	int a = 0;
	int b = 1;
	int *pa;
	int *pb;

	pa = &a;
	pb = &b;

	ft_swap(pa, pb);
	printf("a is now: %d\n", a);
	printf("b is now: %d\n", b);
} */

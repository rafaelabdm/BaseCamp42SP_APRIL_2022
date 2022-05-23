/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 23:08:26 by rabustam          #+#    #+#             */
/*   Updated: 2022/04/14 21:34:35 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

/* int main(void)
{
	int a = 10;
	int b = 3;
	int *ptr_div;
	int *ptr_mod;

	ptr_div = &a;
	ptr_mod = &b;
	
	ft_ultimate_div_mod(ptr_div, ptr_mod);
	printf("div: %d\n", a);
	printf("mod: %d\n", b);
} */

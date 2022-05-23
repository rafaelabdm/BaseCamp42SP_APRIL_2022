/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 23:06:05 by rabustam          #+#    #+#             */
/*   Updated: 2022/04/14 21:32:08 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/* int main(void)
{
	int a = 10;
	int b = 3;
	int div = 8;
	int mod = 0;
	int *ptr_div;
	int *ptr_mod;

	ptr_div = &div;
	ptr_mod = &mod;
	ft_div_mod(a, b, ptr_div, ptr_mod);
	printf("div: %d\n", div);
	printf("mod: %d\n", mod);
} */

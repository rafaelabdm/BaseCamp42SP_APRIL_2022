/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 00:16:47 by rabustam          #+#    #+#             */
/*   Updated: 2022/04/14 21:43:21 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	result;

	result = 0;
	while (*str != '\0')
	{
		result++;
		str++;
	}
	return (result);
}

/* int main()
{
	char str[] = "Rafaela";
	char *ponteiro;
	ponteiro = &str[0];
	
	printf("The string has: %d characters.\n", ft_strlen(ponteiro));
	return 0;
} */

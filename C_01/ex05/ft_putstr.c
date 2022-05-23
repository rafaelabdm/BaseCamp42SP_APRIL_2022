/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 23:22:17 by rabustam          #+#    #+#             */
/*   Updated: 2022/04/14 21:43:31 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_putstr(char *str);

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

/* int main(void)
{
	char string[] = "Rafaela é show";
	char *ponteiro;
	
	ponteiro = &string[0];
	ft_putstr(ponteiro);	
} */

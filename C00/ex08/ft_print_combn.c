/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 11:27:39 by asolano-          #+#    #+#             */
/*   Updated: 2022/02/17 11:10:31 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	next(char *c, int n);

void	ft_print_combn(int n)
{
	char	comb[9];

	comb[0] = '0';
	comb[1] = '1';
	comb[2] = '2';
	comb[3] = '3';
	comb[4] = '4';
	comb[5] = '5';
	comb[6] = '6';
	comb[7] = '7';
	comb[8] = '8';
	write(1, comb, n);
	while (next(comb, n))
	{
		write(1, ", ", 2);
		write(1, comb, n);
	}
}

int	next(char *c, int n)
{
	int	i;

	i = n - 1;
	if (c[i] < '9')
	{
		c[i]++;
		return (1);
	}
	i--;
	while (c[i] >= '9' - (n - 1 - i))
	{
		i--;
	}
	if (i < 0)
	{
		return (0);
	}
	c[i]++;
	while (i < n -1)
	{
		c[i +1] = c[i] + 1;
		i++;
	}
	return (1);
}
/*
int main(void)
{
	ft_print_combn(9);
	return(0);
}
*/

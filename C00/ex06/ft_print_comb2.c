/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 11:13:20 by asolano-          #+#    #+#             */
/*   Updated: 2022/02/17 11:09:00 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);
void	print_numbers(int a, int b);

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			print_numbers(a, b);
			write(1, ", ", 2);
			b++;
		}
		a++;
	}
	b = 99;
	print_numbers(a, b);
}

void	print_numbers(int a, int b)
{
	char	digit[5];

	digit[0] = a % 100 / 10 + '0';
	digit[1] = a % 10 + '0';
	digit[2] = ' ';
	digit[3] = b % 100 / 10 + '0';
	digit[4] = b % 10 + '0';
	write(1, digit, 5);
}
/*
int main(void)
{
	ft_putnbr();
	return(0);
}
*/

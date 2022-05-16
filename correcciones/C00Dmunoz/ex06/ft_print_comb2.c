/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmunoz-e <dmunoz-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 22:47:55 by dmunoz-e          #+#    #+#             */
/*   Updated: 2022/02/14 19:54:52 by dmunoz-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

char	ft_result(char c, int n)
{
	char	condition;

	condition = 0;
	if (n == 0)
	{
		condition = c / 10 + '0';
	}
	else
		condition = c % 10 + '0';
	return (condition);
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar(ft_result(a, 0));
			ft_putchar(ft_result(a, 1));
			ft_putchar(' ');
			ft_putchar(ft_result(b, 0));
			ft_putchar(ft_result(b, 1));
			if (!(a == 98 && b == 99))
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}

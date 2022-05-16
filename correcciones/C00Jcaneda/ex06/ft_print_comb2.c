/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaneda- <jcaneda-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:42:50 by jcaneda-          #+#    #+#             */
/*   Updated: 2022/02/17 11:47:00 by jcaneda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int n)
{
	n = n + 48;
	write (1, &n, 1);
}

void	ft_painttwo(int a, int b)
{
	ft_putchar (a / 10);
	ft_putchar (a % 10);
	write (1, " ", 1);
	ft_putchar (b / 10);
	ft_putchar (b % 10);
	if (a == 98 & b == 99)
	{
		return ;
	}
	else
	{
		write (1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_painttwo(a, b);
			b++;
		}
		a++;
	}
}

/*int	main(void)

{
	ft_print_comb2();
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 11:26:23 by alfomart          #+#    #+#             */
/*   Updated: 2022/02/14 08:18:01 by alfomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	int_to_char(int number)
{
	char	c;
	int		i;

	c = '0';
	i = 0;
	while (i < number)
	{
		c++;
		i++;
	}
	return (c);
}

void	check_comma(int a, int b, int c)
{
	if ((a == 7) && (b == 8) && (c == 9))
	{
		ft_putchar('\n');
	}
	else
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	print_number(int a, int b, int c)
{
	ft_putchar(int_to_char(a));
	ft_putchar(int_to_char(b));
	ft_putchar(int_to_char(c));
	check_comma(a, b, c);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a < 10)
	{
		b = 0;
		while (b < 10)
		{
			c = 0;
			while (c < 10)
			{
				if ((c > b) && (b > a))
				{
					print_number(a, b, c);
				}
				c++;
			}
			b++;
		}
	a++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 10:51:54 by gromero-          #+#    #+#             */
/*   Updated: 2022/02/19 10:51:59 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_number(int z)
{
	char	num;

	num = z % 10 + '0';
	write(1, &num, 1);
}

int	condition2(long base, long test)
{
	int	b;

	while (base <= test)
	{
		base *= 10;
	}
	base /= 10;
	b = (int)base;
	return (b);
}

int	prueba(int lon)
{
	long	base;
	long	test;

	test = lon;
	base = 1;
	if (test >= 0)
	{
		base = condition2(base, test);
		return (base);
	}
	else
	{
		test = test * -1;
		base = condition2(base, test);
		return (base);
	}
}

void	condition(int nb, int base)
{
	while (base != 0)
	{
		if (nb == -2147483648)
		{
			write (1, "-2", 2);
			nb = 147483648;
			base /= 10;
		}
		else if (nb < 0)
		{
			write (1, "-", 1);
			nb = -nb;
			print_number(nb / base);
			base /= 10;
		}
		else
		{
			print_number(nb / base);
			base /= 10;
		}
	}
}

void	ft_putnbr(int nb)
{
	int	base;

	base = prueba(nb);
	if (nb == 0)
	{
		print_number(nb);
	}
	condition(nb, base);
}

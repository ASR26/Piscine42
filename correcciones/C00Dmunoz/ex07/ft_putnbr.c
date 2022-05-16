/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmunoz-e <dmunoz-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 23:14:11 by dmunoz-e          #+#    #+#             */
/*   Updated: 2022/02/14 21:06:33 by dmunoz-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	size_nb(int nb)
{
	int	value;

	value = 1;
	while (nb / 10 != 0)
	{
		nb = nb / 10;
		value = value * 10;
	}
	return (value);
}

void	ft_print_all(int num, int lenght)
{
	while (lenght != 0)
	{
		ft_putchar(num / lenght + '0');
		num = num % lenght;
		lenght = lenght / 10;
	}
}

void	ft_putnbr(int nb)
{
	int	lenght;
	int	conv;

	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write(1, "-2147483648", 12);
		}
		else
		{
			conv = nb *(-1);
			lenght = size_nb(conv);
			ft_putchar('-');
			ft_print_all(conv, lenght);
		}
	}
	else
	{
		lenght = size_nb(nb);
		ft_print_all(nb, lenght);
	}
}

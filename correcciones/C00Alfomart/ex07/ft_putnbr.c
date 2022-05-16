/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfomart <alfomart@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 08:13:55 by alfomart          #+#    #+#             */
/*   Updated: 2022/02/14 08:45:23 by alfomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_last_digit(int number)
{
	char	digit;

	if (number > 10)
	{
		print_last_digit(number / 10);
	}
	digit = 48 + (number % 10);
	ft_putchar(digit);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	print_last_digit(nb);
}

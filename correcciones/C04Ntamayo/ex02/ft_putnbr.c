/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntamayo- <ntamayo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:06:41 by ntamayo-          #+#    #+#             */
/*   Updated: 2022/02/19 16:33:31 by ntamayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	unsigned int	number;
	int				div;
	char			c;

	div = 1000000000;
	c = '+';
	if (nb == 0)
		write(1, "0", 1);
	if (nb < 0)
	{
		write(1, "-", 1);
		number = nb * -1;
	}
	else
		number = nb;
	while (number)
	{
		if (!(number / div == 0 && c == '+'))
		{
			c = number / div + '0';
			write(1, &c, 1);
		}
		number %= div;
		div /= 10;
	}
}
/*
int	main(void)
{
	ft_putnbr(42);
	write(1, "\n", 1);
	ft_putnbr(10001);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
}*/

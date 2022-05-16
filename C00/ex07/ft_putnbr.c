/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 11:16:51 by asolano-          #+#    #+#             */
/*   Updated: 2022/03/01 12:40:21 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);
int		max_base(int number);

void	ft_putnbr(int nb)
{
	char	digit;
	int		base;

	if (nb == 0)
		write(1, "0", 1);
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		nb = 0;
	}
	if (nb < 0)
	{
		nb *= -1;
		write (1, "-", 1);
	}
	base = max_base(nb);
	while (base > 0)
	{
		digit = nb / base + '0';
		write(1, &digit, 1);
		nb %= base;
		base /= 10;
	}
}

int	max_base(int number)
{
	long int	base;

	base = 1;
	while (base <= number)
	{
		base = base * 10;
	}
	base /= 10;
	return (base);
}

int main(void)
{
	ft_putnbr(0);
	return(0);
}

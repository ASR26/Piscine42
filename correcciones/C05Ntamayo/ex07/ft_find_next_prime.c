/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntamayo- <ntamayo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 09:35:27 by ntamayo-          #+#    #+#             */
/*   Updated: 2022/02/24 13:12:45 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_prime(int nb)
{
	int	forcer;
	int	mid_val;

	if (nb == -2147483648)
		return (0);
	if (nb < 0)
		nb *= -1;
	forcer = 2;
	mid_val = nb / 2;
	while (forcer <= mid_val)
		if (nb % forcer++ == 0)
			return (0);
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	forcer;

	if (nb <= 1)
		return (2);
	forcer = 2;
	while (nb < 2147483647)
	{
		if (ft_prime(nb))
			return (nb);
		nb++;
	}
	return (nb);
}

#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_find_next_prime(-2));
	printf("%d\n", ft_find_next_prime(0));
	printf("%d\n", ft_find_next_prime(1));
	printf("%d\n", ft_find_next_prime(2));
	printf("%d\n", ft_find_next_prime(4));
	printf("%d\n", ft_find_next_prime(2147483647));
}

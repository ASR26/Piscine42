/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntamayo- <ntamayo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 09:30:25 by ntamayo-          #+#    #+#             */
/*   Updated: 2022/02/24 13:11:19 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	forcer;

	if (nb == -2147483648)
		return (0);
	if (nb < 0)
		nb *= -1;
	forcer = 2;
	while (forcer < nb)
		if (nb % forcer++ == 0)
			return (0);
	return (1);
}

#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_is_prime(-2));
	printf("%d\n", ft_is_prime(0));
	printf("%d\n", ft_is_prime(1));
	printf("%d\n", ft_is_prime(2));
	printf("%d\n", ft_is_prime(4));
	printf("%d\n", ft_is_prime(2147395600));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-d <amunoz-d@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 11:47:23 by amunoz-d          #+#    #+#             */
/*   Updated: 2022/02/26 13:07:29 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	cont;

	cont = 6;
	if ((nb == 0) || (nb == 1))
		return (0);
	if ((nb == 2) || (nb == 3))
		return (1);
	if ((nb % 2 == 0) || (nb % 3 == 0))
		return (0);
	while (cont <= nb / 2)
	{
		if ((nb % (cont - 1) == 0) || (nb % (cont + 1) == 0))
			return (0);
		cont += 6;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	prime;

	prime = nb;
	while (!ft_is_prime(prime))
	{
		prime++;
	}
	return (prime);
}

int	main(void)
{
	printf("%d\n", ft_find_next_prime(5));
	printf("%d\n", ft_find_next_prime(8));
	printf("%d\n", ft_find_next_prime(12));
	return (0);
}

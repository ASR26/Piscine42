/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 09:42:39 by asolano-          #+#    #+#             */
/*   Updated: 2022/03/02 12:10:21 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//* 	LO HACE LENTO, TIME OUT
/*int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
		{
			nb++;
			ft_find_next_prime(nb);
		}
		i++;
	}
	return (nb);
}
*/

int	ft_is_prime(int nb)
{
	int	i;

	i = 6;
	if (nb < 2)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	while (i <= nb / 2)
	{
		if ((nb % (i - 1) == 0) || (nb % (i + 1) == 0))
			return (0);
		i += 6;
	}
	return (1);
}

int	main()
{
	printf("%d",ft_is_prime(25));
}

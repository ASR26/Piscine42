/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akent-go <akent-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 18:27:07 by akent-go          #+#    #+#             */
/*   Updated: 2022/02/24 10:44:59 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	activado;

	activado = 0;
	i = 2;
	if (nb == 0 || nb == 1)
	{
		return (0);
	}
	while (i < nb)
	{
		if (((nb % i) != 0) && (nb % nb == 0))
		{
			activado = 1;
		}
		else
		{
			return (0);
		}
		i++;
	}
	if (activado)
		return (1);
	return (0);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
	{
		return (2);
	}
	while (nb >= 2)
	{
		if (ft_is_prime(nb) == 1)
		{
			return (nb);
		}
		nb++;
	}
	return (0);
}

int	main(void)
{
	printf("%d",ft_find_next_prime(8));
}


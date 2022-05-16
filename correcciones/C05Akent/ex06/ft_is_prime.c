/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akent-go <alexkg007@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 09:24:29 by akent-go          #+#    #+#             */
/*   Updated: 2022/02/24 10:44:11 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int	ft_is_prime(int nb)
{
	int	n;

	n = 2;
	if (nb < 2)
	{
		return (0);
	}
	while (n <= nb / 2 && n <= 46341)
	{
		if (nb % n == 0)
		{
			return (0);
		}
		n++;
	}
	return (1);
}

int	main(void)
{
	printf("%d",ft_is_prime(127));
}

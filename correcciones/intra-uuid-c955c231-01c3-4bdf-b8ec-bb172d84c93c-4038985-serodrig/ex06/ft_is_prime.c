/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serodrig <serodrig@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 19:37:41 by serodrig          #+#    #+#             */
/*   Updated: 2022/03/03 09:18:54 by serodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
#include<stdio.h>
int	main(void)
{
	int	n;

	n = 2147483647;
	while (n > 0 && n <= 2147483647)
	{
		printf("%d es %d", n, ft_is_prime(n));
		printf("\n");
		n = n - (10000000 + n / 20);
	}
	return (0);
}
*/

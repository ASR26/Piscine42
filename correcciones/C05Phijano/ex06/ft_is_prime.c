/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phijano- <phijano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 18:01:16 by phijano-          #+#    #+#             */
/*   Updated: 2022/02/26 10:26:28 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	count;

	if (nb == 2 || nb == 3 || nb == 5)
		return (1);
	if (nb == 0 || nb == 1 || nb % 2 == 0 || nb % 3 == 0 || nb % 5 == 0)
		return (0);
	count = 7;
	while (count < nb / 5)
	{
		if (nb % count == 0)
			return (0);
		count = count + 2;
	}
	return (1);
}

#include <stdio.h>
int	main(void)
{
	int	number;

	number = 169;
	//number = 5;
	printf("El numero %d ", number);
	number = ft_is_prime(number);
	if (number == 0)
		printf("no es primo");
	if (number == 1)
		printf("es primo");
	return (0);
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phijano- <phijano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:50:30 by phijano-          #+#    #+#             */
/*   Updated: 2022/02/26 10:21:27 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	count;

	if (power < 0)
		return (0);
	if (nb == 0)
		return (1);
	result = 1;
	count = 1;
	while (count <= power)
	{
		result = result * nb;
		count++;
	}
	return (result);
}

#include <stdio.h>
int	main(void)
{
	int	number;
	int potencia;
	number = -4;
	potencia = 3;
	printf("La potencia de %d elevado a %d es ", number, potencia);
	number = ft_iterative_power(number, potencia);
	printf("%d", number);
	return (0);
}


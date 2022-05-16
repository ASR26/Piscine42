/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phijano- <phijano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:31:02 by phijano-          #+#    #+#             */
/*   Updated: 2022/02/25 12:04:54 by phijano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
#include <stdio.h>
int	main(void)
{
	int	number;
	int potencia;
	number = -4;
	potencia = 3;
	printf("La potencia de %d elevado a %d es ", number, potencia);
	number = ft_recursive_power(number, potencia);
	printf("%d", number);
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phijano- <phijano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:43:44 by phijano-          #+#    #+#             */
/*   Updated: 2022/02/24 10:34:16 by phijano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	unsigned int	count;

	count = 1;
	while (count * count <= nb)
	{
		if (count * count == nb)
			return (count);
		count++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	int	number;

	number = 2147483647;
	printf("La raiz cuadrada de %d es ", number);
	number = ft_sqrt(number);
	printf("%d", number);
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phijano- <phijano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:47:06 by phijano-          #+#    #+#             */
/*   Updated: 2022/02/26 10:22:38 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index > 1)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	if (index == 1)
		return (1);
	if (index == 0)
		return (0);
	return (-1);
}

#include <stdio.h>
int	main(void)
{
	int	number;

	number = 5;
	printf("El elemento %d de la serie de fibonacci es ", number);
	number = ft_fibonacci(number);
	printf("%d", number);
	return (0);
}


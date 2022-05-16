/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phijano- <phijano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:45:12 by phijano-          #+#    #+#             */
/*   Updated: 2022/02/26 10:19:53 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	count;

	if (nb > 0)
	{
		result = 1;
		count = 1;
		while (count <= nb)
		{
			result = result * count;
			count++;
		}
		return (result);
	}	
	if (nb == 0)
		return (1);
	return (0);
}

#include <stdio.h>
int	main(void)
{
	int	number;

	number = -5;
	printf("El factorial de %d es ", number);
	number = ft_iterative_factorial(number);
	printf("%d", number);
	return (0);
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phijano- <phijano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:33:52 by phijano-          #+#    #+#             */
/*   Updated: 2022/02/26 10:20:39 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb > 0)
		return (nb * ft_recursive_factorial(nb - 1));
	if (nb == 0)
		return (1);
	return (0);
}

#include <stdio.h>
int	main(void)
{
	int	number;

	number = 4;
	printf("El factorial de %d es ", number);
	number = ft_recursive_factorial(number);
	printf("%d", number);
	return (0);
}


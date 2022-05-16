/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 08:51:02 by asolano-          #+#    #+#             */
/*   Updated: 2022/02/17 10:57:46 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	holder;

	holder = *a;
	*a = *b;
	*b = holder;
}
/*
int main(void)
{
	int x = 32;
	int y = 42;

	int *punt1 = &x;
	int *punt2 = &y;
	ft_swap(punt1, punt2);
	printf("EL valor de punt1 en vez de 32 es %d \n", *punt1);
	printf("El valor de punt2 en vez de 42 es %d", *punt2);
	return(0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 13:24:27 by asolano-          #+#    #+#             */
/*   Updated: 2022/02/17 10:17:30 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	holder;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		holder = *(tab + size - 1 - i);
		*(tab + size - 1 - i) = *(tab + i);
		*(tab + i) = holder;
		i++;
	}
}
/*
int main(void)
{
	int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int count = 0;
	int *arreglo;

	arreglo = &arr[0];
	ft_rev_int_tab(arreglo, 9);
	while (count != 9)
	{
		printf("El valor del %d devuelto es %d \n", count, *arreglo);
		count ++;
		arreglo++;
	}
	return(0);
}
*/

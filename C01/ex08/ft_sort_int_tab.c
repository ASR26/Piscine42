/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 09:44:25 by asolano-          #+#    #+#             */
/*   Updated: 2022/02/17 10:54:42 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	holder;
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size - 1)
	{
		while (j < (size - 1))
		{
			if (*(tab + j) > *(tab + j + 1))
			{
				holder = *(tab + j);
				*(tab + j) = *(tab + j + 1);
				*(tab + j + 1) = holder;
				j = 0;
			}
			else
				j++;
		}
		i++;
	}
}
/*
int main(void)
{
    int arr[9] = {8, 7, 6, 5, 3, 1, 2, 4, 9};
    int count = 0;
    int *arreglo;

    arreglo = &arr[0];
                    ft_sort_int_tab(arreglo, 9);
                        while (count != 9)
                        {
							printf("El valor de %d devuelto es %d \n", count, *arreglo);
                            count ++;
                            arreglo++;
                        }
    return(0);
}*/

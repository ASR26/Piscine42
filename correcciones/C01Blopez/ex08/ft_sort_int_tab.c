/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blopez-j <blopez-j@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 11:40:04 by blopez-j          #+#    #+#             */
/*   Updated: 2022/02/23 20:13:07 by blopez-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int		indice;
	int		aux;

	indice = 0;
	aux = 0;
	size--;
	while (indice < size)
	{
		if (tab[indice] > tab[indice + 1])
		{
			aux = tab[indice];
			tab[indice] = tab[indice + 1];
			tab[indice + 1] = aux;
			indice = 0;
		}
		else
			indice++;
	}
}

/*int	main(void)
{
	int		*tab;
	int		size;
	int		tabla[9];
	int 	i;

	tab = &tabla[0];
	size = 9;
	i = 0;
	tabla[0] = -104;
	tabla[1] = 2966;
	tabla[2] = 1941;
	tabla[3] = 506;
	tabla[4] = 2611;
	tabla[5] = -2252;
	tabla[6] = 1195;
	tabla[7] = -1366;
	tabla[8] = 1411;
	while (i <= size - 1)
	{
		printf("%d " , tabla[i]);
		i++;
	}
	ft_sort_int_tab(tab, size);
	return (0);
}*/

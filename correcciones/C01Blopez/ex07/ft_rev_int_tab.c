/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blopez-j <blopez-j@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 20:24:41 by blopez-j          #+#    #+#             */
/*   Updated: 2022/02/24 12:04:44 by blopez-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		indice;
	int		n;

	indice = 0;
	n = 0;
	while (indice < (size / 2))
	{
		n = tab[indice];
		tab[indice] = tab[size - 1 - indice];
		tab[size - 1 - indice] = n;
		indice++;
	}
}

/*int	main(void)
{
	int	*tab;
	int	size;
	int	i;
	int	tabla[3];

	tab = &tabla[0];
	size = 3;
	i = 0;
	tabla[0] = 4;
	tabla[1] = 0;
	tabla[2] = -1;
	ft_rev_int_tab(tab, size);
	printf("%d %d %d", tabla[0], tabla[1], tabla[2]);
	return (0);
}*/

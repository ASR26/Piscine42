/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagarci <alagarci@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:47:07 by alagarci          #+#    #+#             */
/*   Updated: 2022/02/25 11:09:54 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_sort_int_tab(int *tab, int size)
{
	int	aux;
	int	i;

	while (size != 0)
	{
		i = 0;
		while (i < size)
		{
			if (tab[i] > (tab[i + 1]))
			{
				aux = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = aux;
			}
			i++;
		}
	size--;
	}
}

#include <stdio.h>

int main()
{
	int tab[] = {4, 3, 1, 2, 5};
	int size = 5;
	int i = 0;
	

		ft_sort_int_tab(tab, size);
		
		i=0;
		size = 5;
		
		while(i < size)
		{
		printf("%d", tab[i]);
		i++;
	}
}

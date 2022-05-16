/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagarci <alagarci@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 10:10:40 by alagarci          #+#    #+#             */
/*   Updated: 2022/02/23 16:47:24 by alagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	aux;

	i = 0;
	while (i < (size / 2))
	{
		aux = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size -1 - i] = aux;
		i++;
	}
}
/*
#include <stdio.h>

int main(void)
{
	int tab[] = {1, 2, 3, 4, 5};
	int size = 5;
	int b = 0;

	ft_rev_int_tab(tab, size);
	while (b < size)
	{
		printf("%d", tab[b]);
		b++;
	}
	return (0);
}*/

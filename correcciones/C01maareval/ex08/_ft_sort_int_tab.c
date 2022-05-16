/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _ft_sort_int_tab.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maareval <maareval@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 19:08:13 by maareval          #+#    #+#             */
/*   Updated: 2022/02/18 10:19:11 by maareval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	count;
	int	aux;
	int	chg;
	int	stop;

	stop = 0;
	while (stop == 0)
	{	
		count = 0;
		chg = 0;
		while (count < (size - 1))
		{
			if (tab[count] > tab[count + 1])
			{
				aux = tab[count];
				tab[count] = tab[count + 1];
				tab[count + 1] = aux;
				chg++;
			}
			if (chg == 0)
				stop = 1;
		count++;
		}
	}	
}
/*
int	main(void)
{
	int n;
	n = 5;
	int	ar1[n];
	int	j;
	int i;
	i = 0;
	while (i <= (n - 1))
	{
		ar1[i] = n - i;
		i++;
	}
	ft_sort_int_tab(ar1, n);
	j = 0;
	while (j < n)
	{
		printf("%d, ", ar1[j]);
		j++;
	}
	return (0);
}*/

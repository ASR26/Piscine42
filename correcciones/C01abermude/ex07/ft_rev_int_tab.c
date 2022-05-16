/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abermude <abermude@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 06:57:24 by abermude          #+#    #+#             */
/*   Updated: 2022/02/21 07:46:38 by abermude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_rev_int_tab(int	*tab, int size)

{
	int	a;
	int	b;
	int	aux;

	a = 0;
	b = size -1;
	while (a < size / 2)
	{
		aux = tab[a];
		tab[a] = tab[b];
		tab[b] = aux;
		a++;
		b--;
	}
}
/*#include <stdio.h>
int	main(void)
{
	int	arr[] = {50, 44, 152, 12, 13};
	int	x;

	x = 0;
	ft_rev_int_tab(arr, 5);
	while (x < 5)
	{
		printf("%d, ", arr[x]);
		x++;
	}
	return (0);
}*/

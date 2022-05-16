/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntamayo- <ntamayo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:26:38 by ntamayo-          #+#    #+#             */
/*   Updated: 2022/02/23 10:39:28 by ntamayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power == 0)
		return (1);
	else if (power < 0 || nb == 0)
		return (0);
	while (power > 1)
	{
		i *= nb;
		power--;
	}
	return (i);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_iterative_power(2,-1));
	printf("%d\n", ft_iterative_power(2,0));
	printf("%d\n", ft_iterative_power(0,0));
	printf("%d\n", ft_iterative_power(2,4));
}*/

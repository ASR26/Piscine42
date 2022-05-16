/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 11:47:27 by asolano-          #+#    #+#             */
/*   Updated: 2022/02/26 15:51:06 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	j;

	j = 1;
	i = nb;
	while (j < i)
	{
		i = (i + j) / 2;
		j = nb / i;
	}
	if (i * i == nb)
		return (i);
	return (0);
}
/*
int	main ()
{
	printf("%d",ft_sqrt(144));
}*/

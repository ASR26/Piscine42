/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 11:42:00 by asolano-          #+#    #+#             */
/*   Updated: 2022/02/28 11:57:42 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*num;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	num = (int *) malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		*(num + i) = min;
		i++;
		min++;
	}
	return (num);
}
/*
int main(void)
{
	int *num;

	num = ft_range(2, 5);
	printf("%d %d %d", num[0], num[1], num[2]);
	return (0);
}*/

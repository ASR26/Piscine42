/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 13:30:51 by asolano-          #+#    #+#             */
/*   Updated: 2022/02/28 16:02:32 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*num;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	num = (int *) malloc(sizeof(int) * (max - min));
	if (num == NULL)
		return (-1);
	else
	{
		while (min < max)
		{
			*(num + i) = min;
			i++;
			min++;
		}
		*range = num;
	}
	return (i);
}
/*
int	main()
{
	int *range;
	int size;

	size =	ft_ultimate_range(&range, 2, 5);
	printf("Size:%d" " %d" " %d" " %d", size, range[0], range[1], range[2]);
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darlandi <darlandi@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 11:18:36 by darlandi          #+#    #+#             */
/*   Updated: 2022/02/27 12:53:40 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*num;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	num = (int *)malloc(sizeof(int) * (max - min));
	if (num == NULL)
		return (-1);
	else
	{
		i = 0;
		while (min < max)
		{
			num[i] = min;
			min++;
			i++;
		}
		*range = num;
	}
	return (i);
}

int main(void)
{
	int *range;
	int size;

	size =	ft_ultimate_range(&range, 2, 5);
	printf("Size:%d" " %d" " %d" " %d", size, range[0], range[1], range[2]);
	return (0);
}

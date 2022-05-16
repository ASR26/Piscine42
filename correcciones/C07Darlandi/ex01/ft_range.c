/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darlandi <darlandi@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:06:29 by darlandi          #+#    #+#             */
/*   Updated: 2022/02/27 12:51:12 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int	*ft_range(int min, int max)
{
	int	*num;
	int	i;

	if (min >= max)
		return (0);
	num = (int *)malloc(sizeof(int) * (max - min));
	i = 0;
	if (num == NULL)
		return (0);
	while (min < max)
	{
		num[i] = min;
		min++;
		i++;
	}
	return (num);
}

int main(void)
{
	int *num;

	num = ft_range(2, 5);
	printf("%d %d %d %d", num[0], num[1], num[2]);
	return (0);
}

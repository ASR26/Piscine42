/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmunoz-a <fmunoz-a@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 08:44:06 by fmunoz-a          #+#    #+#             */
/*   Updated: 2022/03/02 10:18:07 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_get_size(int min, int max)
{
	int	i;

	i = 0;
	while ((i + min) < max)
		i++;
	return (i);
}

int	*ft_range(int min, int max)
{
	int	*r;
	int	i;
	int	j;

	j = 0;
	i = min;
	if (min >= max)
		return (0);
	r = malloc(sizeof(int) * (ft_get_size(min, max)));
	if (!r)
		return (0);
	while (i < max)
		r[j++] = i++;
	return (r);
}

#include <stdio.h>
int main()
{
	int *range;
	int i;
	int min = 3;
	int max = 10;

	i = 0;
	range = ft_range(min, max);
	while(i + min < max)
	{
		printf("%d ",range[i]);
		i++;
	}
}


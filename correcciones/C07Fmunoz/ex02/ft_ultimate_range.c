/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmunoz-a <fmunoz-a@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 09:39:56 by fmunoz-a          #+#    #+#             */
/*   Updated: 2022/03/02 10:18:51 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*r;
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	r = malloc(sizeof (**range) * (max - min));
	if (!r)
		return (0);
	while (min < max)
	{
		r[j++] = min++;
		i++;
	}
	*range = r;
	return (i);
}

#include <stdio.h>
int main()
{
	int *range;
	int i;
	int min = 2;
	int max = 10;

	i = 0;
	printf("%d\n", ft_ultimate_range(&range, min, max));
	while(i + min < max)
	{
		printf("%d ",range[i]);
		i++;
	}
}


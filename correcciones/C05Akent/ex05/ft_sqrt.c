/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akent-go <akent-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:22:27 by akent-go          #+#    #+#             */
/*   Updated: 2022/02/24 10:39:41 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	num;
	long	b;

	num = 0;
	b = nb;
	if (b <= 0)
	{
		return (0);
	}
	if (b == 1)
	{
		return (1);
	}
	if (b >= 2)
	{
		while (num * num <= nb)
		{
			if (num * num == b)
			{
				return (num);
			}
			num++;
		}
	}
	return (0);
}

int	main(void)
{
	//printf("%d",ft_iterative_power(3,3));
	printf("%d",ft_sqrt(5));
}

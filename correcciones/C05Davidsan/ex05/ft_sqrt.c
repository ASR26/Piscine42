/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsan <davidsan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 17:01:30 by davidsan          #+#    #+#             */
/*   Updated: 2022/03/01 09:09:32 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_sqrt(int nb)
{
	long	a;
	long	b;

	b = nb;
	if (b <= 0)
		return (0);
	if (b == 1)
		return (1);
	a = 2;
	if (b >= 2)
	{
		while (a * a <= b)
		{
			if (a * a == b)
			{
				return (a);
			}
			a++;
		}
	}
	return (0);
}

int	main(void)
{
	printf("%d", ft_sqrt(16));
	return (0);
}


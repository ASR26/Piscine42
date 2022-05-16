/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidsan <davidsan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 11:08:27 by davidsan          #+#    #+#             */
/*   Updated: 2022/03/01 09:05:44 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (power >= 1)
	{	
		result = result * nb;
		power --;
	}
	return (result);
}

int	main (void)
{
	printf("%d",ft_iterative_power(4, 4)); 
	return (0);
}


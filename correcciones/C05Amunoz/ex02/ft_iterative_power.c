/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-d <amunoz-d@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:50:22 by amunoz-d          #+#    #+#             */
/*   Updated: 2022/02/26 13:02:23 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	base;

	base = nb;
	if (power < 0)
		return (0);
	if ((nb == 0) && (power == 0))
		return (1);
	if (power == 0)
		return (1);
	while (power > 1)
	{	
		base *= nb;
		power--;
	}
	return (base);
}

int	main(void)
{
	printf("%d\n", ft_iterative_power(3, 3));
	printf("%d\n", ft_iterative_power(3, -1));
	printf("%d\n", ft_iterative_power(-2, 7));
}

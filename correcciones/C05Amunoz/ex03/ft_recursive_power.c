/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-d <amunoz-d@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:50:22 by amunoz-d          #+#    #+#             */
/*   Updated: 2022/02/24 10:59:47 by amunoz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_recursive_power(int nb, int power)
{
	int	base;

	base = nb;
	if (power < 0)
		return (0);
	if ((power == 0) && (nb == 0))
		return (1);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
		base = nb * ft_recursive_power(nb, power - 1);
	return (base);
}
/*
int	main(void)
{
	printf("%d\n", ft_recursive_power(3, 4));
	printf("%d\n", ft_recursive_power(3, -1));
	printf("%d\n", ft_recursive_power(0, 0));
}*/

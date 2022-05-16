/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 11:31:57 by asolano-          #+#    #+#             */
/*   Updated: 2022/02/25 11:37:19 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_recursive_power(2,-1));
	printf("%d\n", ft_recursive_power(2,0));
	printf("%d\n", ft_recursive_power(0,0));
	printf("%d\n", ft_recursive_power(2,4));
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntamayo- <ntamayo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:55:25 by ntamayo-          #+#    #+#             */
/*   Updated: 2022/02/24 09:18:24 by ntamayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power < 0 || nb == 0)
		return (0);
	if (power == 1)
		return (nb);
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

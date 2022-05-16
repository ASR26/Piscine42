/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serodrig <serodrig@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 11:27:08 by serodrig          #+#    #+#             */
/*   Updated: 2022/03/03 09:21:01 by serodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{	
	int	num;

	num = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{	
		num = num * nb;
		power--;
	}
	return (num);
}
/*
#include<stdio.h>
int	main(void)
{
	printf("%d", ft_iterative_power(10, 0));
	return (0);
}
*/

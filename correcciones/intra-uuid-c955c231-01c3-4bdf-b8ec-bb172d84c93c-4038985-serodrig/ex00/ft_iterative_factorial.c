/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serodrig <serodrig@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 09:23:41 by serodrig          #+#    #+#             */
/*   Updated: 2022/03/02 20:24:11 by serodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	num;

	num = 1;
	if (nb < 0)
		return (0);
	while (nb)
		num *= nb--;
	return (num);
}
/*
#include<stdio.h>

int	main(void)
{
	printf("%d", ft_iterative_factorial(0));
	return (0);
}
*/

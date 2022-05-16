/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-d <amunoz-d@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 11:41:42 by amunoz-d          #+#    #+#             */
/*   Updated: 2022/02/23 11:42:20 by amunoz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_sqrt(int nb)
{
	int	a;
	int	b;

	a = nb;
	b = 1;
	while (a > b)
	{
		a = (a + b) / 2;
		b = nb / a;
	}
	if (a * a == nb)
		return (a);
	return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_sqrt(25));
	printf("%d\n", ft_sqrt(24));
	return (0);
}*/

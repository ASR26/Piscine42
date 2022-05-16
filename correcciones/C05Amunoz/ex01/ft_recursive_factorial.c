/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-d <amunoz-d@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:50:22 by amunoz-d          #+#    #+#             */
/*   Updated: 2022/02/23 09:10:52 by amunoz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_recursive_factorial(int nb)
{
	int	fac;

	fac = 1;
	if (nb < 0)
		return (0);
	else if (nb > 1)
		fac = nb * ft_recursive_factorial(nb - 1);
	return (fac);
}
/*
int	main(void)
{
	printf("%d\n", ft_recursive_factorial(4));
}*/

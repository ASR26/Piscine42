/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akent-go <akent-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 20:23:42 by akent-go          #+#    #+#             */
/*   Updated: 2022/02/24 10:33:02 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_iterative_factorial(int nb)
{
	int					i;
	unsigned int		res;

	i = nb;
	res = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb)
	{
		res *= nb--;
	}
	return (res);
}

int	main(void)
{	
	printf("%d",ft_iterative_factorial(5));
}


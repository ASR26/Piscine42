/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akent-go <akent-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 20:02:45 by akent-go          #+#    #+#             */
/*   Updated: 2022/02/24 10:35:40 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	int					i;
	unsigned int		res;

	i = nb;
	res = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (i >= 1)
	{
		res *= i;
		i--;
		ft_recursive_factorial(i);
	}
	return (res);
}

int	main(void)
{	
	printf("%d",ft_recursive_factorial(5));
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abermude <abermude@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:35:30 by abermude          #+#    #+#             */
/*   Updated: 2022/02/21 08:17:46 by abermude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int	*a, int	*b)
{
	int	swap;

	swap = *a ;
	*a = *b ;
	*b = swap;
}
/*#include <stdio.h>
int	main(void)
{
	int	c = 4;
	int	d = 5;
	int	*a = &c;
	int	*b = &d;
	ft_swap(a,b);
	printf("deberia ser un 4 pero es un :%d\n",*a);
	printf("deberia ser un 5 pero es un :%d\n",*b);
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blopez-j <blopez-j@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:23:53 by blopez-j          #+#    #+#             */
/*   Updated: 2022/02/19 18:40:29 by blopez-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	aux1;
	int	aux2;

	aux1 = *a;
	aux2 = *b;
	*a = aux2;
	*b = aux1;
}

/*int	main(void)
{
	int	n1;
	int	n2;
	int	*a;
	int	*b;

	n1 = 26;
	n2 = 42;
	a = &n1;
	b = &n2;
	ft_swap (a, b);
	return (0);
}*/

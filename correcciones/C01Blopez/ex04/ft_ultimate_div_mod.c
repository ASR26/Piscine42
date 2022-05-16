/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blopez-j <blopez-j@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:57:18 by blopez-j          #+#    #+#             */
/*   Updated: 2022/02/24 12:23:14 by blopez-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	d;
	int	r;

	d = *a / *b;
	r = *a % *b;
	*a = d;
	*b = r;
}

/*#include <stdio.h>

int	main(void)
{
	int	*a;
	int	*b;
	int	n1;
	int	n2;
	
	n1 = 113014;
	n2 = 10;
	a = &n1;
	b = &n2;
	ft_ultimate_div_mod(a, b);
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blopez-j <blopez-j@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:41:14 by blopez-j          #+#    #+#             */
/*   Updated: 2022/02/19 18:55:24 by blopez-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	*div;
	int	*mod;
	int d;
	int	r;

	div = &d;
	mod = &r;
	ft_div_mod(53, 10, div, mod);
	return (0);
}*/

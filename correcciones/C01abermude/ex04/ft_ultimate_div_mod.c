/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abermude <abermude@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 10:39:43 by abermude          #+#    #+#             */
/*   Updated: 2022/02/21 08:19:18 by abermude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int	*a, int	*b)
{
	int	res;
	int	mod;

	res = *a / *b;
	mod = *a % *b;
	*a = res;
	*b = mod;
}
/*#include <stdio.h>
int	main(void)
{
	int	a = 15;
	int	b = 3;
	ft_ultimate_div_mod(&a,&b);
	printf("Aquí está la parte entera:%d\n", a);
	printf("Aquí está el resto:%d\n", b);
	return (0);
}*/

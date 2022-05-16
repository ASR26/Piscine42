/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abermude <abermude@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:02:43 by abermude          #+#    #+#             */
/*   Updated: 2022/02/21 08:18:44 by abermude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*#include <stdio.h>
int	main(void)
{
	int	a = 14;
	int	b = 3;
	int c;
	int d;
	ft_div_mod(a,b,&c,&d);
	printf("La parte entera es:%d\n", c);
	printf("El resto es:%d\n", d);
	return (0);
}*/

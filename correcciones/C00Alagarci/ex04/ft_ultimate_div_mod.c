/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagarci <alagarci@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 20:12:08 by alagarci          #+#    #+#             */
/*   Updated: 2022/02/25 11:07:23 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int x;
	x = *a / *b;
	*a = x;
	*b = *a % *b;
}
int	main(void)
{
	int c = 20;
	int d = 3;

	int *div = &c;
	int *mod = &d;

	ft_ultimate_div_mod(div, mod);
	printf("El valor de A es antes era 20 ahora es: %d \n", *div);
	printf("El valor de B es antes era 3 ahora es: %d \n", *mod);
	return(0);
}

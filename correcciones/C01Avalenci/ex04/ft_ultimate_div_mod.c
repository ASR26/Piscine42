/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avalenci <avalenci@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 19:39:45 by avalenci          #+#    #+#             */
/*   Updated: 2022/02/20 13:34:30 by avalenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*
int	main(void)
{		
		int div;
		int mod;
		int a = 4;
		int b = 2;
		printf("El resultado de la división es: %d\n", div);
		printf("El resto de la división es: %d\n", mod);
}
*/

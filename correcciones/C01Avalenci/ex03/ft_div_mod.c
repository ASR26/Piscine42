/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avalenci <avalenci@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:50:24 by avalenci          #+#    #+#             */
/*   Updated: 2022/02/17 19:38:57 by avalenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int a = 20;
	int b = 45;
	int c = 0;
	int d = 0;

	int *div = &c;
	int *mod = &d;

	ft_div_mod(a,b,div,mod);
	printf("Division (div): %d\n", *div);
	printf("Resto (mod): %d\n", *mod);
	return (0);
}
*/

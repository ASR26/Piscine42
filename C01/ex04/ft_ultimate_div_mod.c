/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:48:49 by asolano-          #+#    #+#             */
/*   Updated: 2022/02/17 10:59:23 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	a_holder;
	int	b_holder;

	a_holder = *a;
	b_holder = *b;
	*a = a_holder / b_holder;
	*b = a_holder % b_holder;
}
/*
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
*/

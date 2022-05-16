/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 10:57:42 by asolano-          #+#    #+#             */
/*   Updated: 2022/02/17 10:58:47 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*mod = a % b;
	*div = a / b;
}
/*
int	main(void)
{
	int a = 20;
	int b = 3;
	int c = 0;
	int d = 0;

	int *div = &c;
	int *mod = &d;

	ft_div_mod(a , b, div, mod);

	printf("El valor de div es: %d \n", *div);
	printf("El valor de mod es: %d", *mod);
	return(0);
}
*/

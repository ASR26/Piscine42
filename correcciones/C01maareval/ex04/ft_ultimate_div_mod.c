/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maareval <maareval@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:35:23 by maareval          #+#    #+#             */
/*   Updated: 2022/02/16 19:09:04 by maareval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}
/*
int main(void)
{
	int	x;
	int y;

	printf("Introduce los numeros: \n");
	scanf("%d\n", &x);
	scanf("%d", &y);
	printf("Vamos a dividir %d entre %d y a sacar el resto\n", x, y);
	ft_ultimate_div_mod(&x, &y);
	printf("El resultado de la division es: %d\n", x);
	printf("El resto es: %d\n", y);
	return(0);
}*/

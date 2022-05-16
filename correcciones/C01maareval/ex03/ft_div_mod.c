/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maareval <maareval@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:30:09 by maareval          #+#    #+#             */
/*   Updated: 2022/02/16 16:53:17 by maareval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main(void)
{
	int	x;
	int	y;
	int nu1;
	int nu2;
	
	printf("Introduce los numeros con los que quieres operar:\n");
	scanf("%d\n", &nu1);
	scanf("%d", &nu2);
	ft_div_mod(nu1, nu2, &x, &y);
	printf("El resultado de dividir %d entre %d es: %d\n", nu1, nu2, x);
   	printf("El resto de %d y %d es: %d\n", nu1, nu2, y);	
	return(0);
}*/

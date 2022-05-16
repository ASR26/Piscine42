/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 11:42:13 by gromero-          #+#    #+#             */
/*   Updated: 2022/02/23 09:58:07 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <unistd.h>
#include <stdio.h>
int	iden_base(char *base)
{
	char	*decimal;
	char	*bin;
	char	*hexa;
	char	*octal;
	int	cont;
	int sol;

	cont = 0;
	decimal = "0123456789";
	bin = "01";
	hexa = "0123456789ABCDEF";
	octal = "poniguay";
	while (base[cont])
	{
		if (base[cont] == decimal[cont])
			sol++;
		else if (base[cont] == bin[cont])
			sol++;
		else if (base[cont] == hexa[cont])
			sol++;
		else if (base[cont] == octal[cont])
			sol++;
		cont++;
	}
	return (sol);
}
void ft_putnbr_base(int nbr, char *base)
{
	int bas;

	bas = iden_base(base);
	if (bas == 10)
	else if (bas == 2)
	{
	
	}
	else if (bas == 16)
	else if (bas == 8)
}
#include <stdio.h>
int main(void)
{
	char x[10] = "poniguay";

	ft_putnbr_base(523, x);
	return (0);	
}*/

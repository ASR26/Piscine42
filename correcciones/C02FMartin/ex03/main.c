/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartin- <fmartin-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:47:09 by fmartin-          #+#    #+#             */
/*   Updated: 2022/02/17 11:46:55 by fmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_str_is_numeric(char *src);

int	main(void)
{
	char	cadena[40] = "dfad/*/* ";
	int	n;
	
	n = 0;	
	printf("Cadena original .: %s \n", cadena);
	printf("Se envia  a la función ft_str_is_numeric para comprobar si solo son caracteres numéricos... \n");
	if (ft_str_is_numeric(cadena))
	{
		printf("El string analizado solo tiene caracteres numéricos. \n");
		n = 1;
	}
	else
		printf("El string analizado no solo tiene caracteres numéricos... contine caracteres especiales \n");
	printf("Resultado técnico del retorno de la función.: %i \n", n);
}

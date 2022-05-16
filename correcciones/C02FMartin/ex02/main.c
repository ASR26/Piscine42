/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartin- <fmartin-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:47:09 by fmartin-          #+#    #+#             */
/*   Updated: 2022/02/17 11:14:25 by fmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_str_is_alpha(char *src);

int	main(void)
{
	char	cadena[40] = "Francisceari4234olina";
	int	n;
	
	n = 0;	
	printf("Cadena original .: %s \n", cadena);
	printf("Se envia  a la función ft_str_is_alpha para comprobar si solo son caracteres alfabéticos... \n");
	if (ft_str_is_alpha(cadena))
	{
		printf("El string analizado solo tiene caracteres alfabeticos. \n");
		n = 1;
	}
	else
		printf("El string analizado no solo tiene caracteres alfabeticos... contine caracteres especiales \n");
	printf("Resultado técnico del retorno de la función.: %i \n", n);
}

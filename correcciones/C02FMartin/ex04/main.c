/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartin- <fmartin-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:47:09 by fmartin-          #+#    #+#             */
/*   Updated: 2022/02/17 11:38:27 by fmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_str_is_lowercase(char *src);

int	main(void)
{
	char	cadena[40] = "";
	int	n;
	
	n = 0;	
	printf("Cadena original .: %s \n", cadena);
	printf("Se envia a la función ft_str_is_lowercase para comprobar si solo son caracteres en minúsculas... \n");
	if (ft_str_is_lowercase(cadena))
	{
		printf("El string analizado solo tiene caracteres en minúsculas. \n");
		n = 1;
	}
	else
		printf("El string analizado no solo tiene caracteres en minúsculas... contine cualquier cosa \n");
	printf("Resultado técnico del retorno de la función.: %i \n", n);
}

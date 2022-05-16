/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartin- <fmartin-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:47:09 by fmartin-          #+#    #+#             */
/*   Updated: 2022/02/17 10:37:23 by fmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	cadena1[20] = "Francisco ";
	char	cadena2[20] = "Martín Molina";
	unsigned	int	n;
	
	n = 2;
	printf("Cadena 1 original .: %s \n", cadena1);
	printf("Cadena 2 original .: %s \n", cadena2);
	printf("Aplicando función para copiar de la cadena 2 solo %i caracteres en la cadena 1 ...\n", n);
	printf("Cadena 1 tras aplicar función.: %s \n", ft_strncpy(cadena1, cadena2, n));
	printf("Cadena 2 tras aplicar función.: %s \n", cadena2);
}

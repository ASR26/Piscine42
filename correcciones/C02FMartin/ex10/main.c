/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartin- <fmartin-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:47:09 by fmartin-          #+#    #+#             */
/*   Updated: 2022/02/21 11:55:25 by fmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	cadena1[50] = "Cadenataka";
	char	cadena2[50] = "Cadenita";
	int		size;

	size = 20;
	system ("clear");
	printf("Resultado en PRUEBAS de este ejercicio...\n");
	printf("Cadena1 tratada como destino, que originalmente contiene.: %s\n", cadena1);
	printf("Devuelve el tamaño de la cadena resultante: %i\n", ft_strlcpy(cadena1, cadena2, 10));
	printf("Valor cadena1 supuestamente modificada tradata como destino.: %s\n", cadena1);
	printf("Valor cadena2 tratada como origen.: %s\n", cadena2);
	return (0);
}

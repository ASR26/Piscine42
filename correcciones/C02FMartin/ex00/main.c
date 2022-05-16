/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartin- <fmartin-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:47:09 by fmartin-          #+#    #+#             */
/*   Updated: 2022/02/22 16:39:27 by fmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	cadena1[20] = "Francisco ";
	char	cadena2[20] = "Martín";
	
	printf("Cadena 1 original .: %s \n", cadena1);
	printf("Cadena 2 original .: %s \n", cadena2);
	printf("Aplicando función para copiar cadena 2 sobre cadena 1 ...\n");
	printf("Cadena 1 tras aplicar función.: %s \n", ft_strcpy(cadena1, cadena2));
	printf("Cadena 2 tras aplicar función.: %s \n", cadena2);
}

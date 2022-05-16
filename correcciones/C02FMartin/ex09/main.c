/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartin- <fmartin-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:47:09 by fmartin-          #+#    #+#             */
/*   Updated: 2022/02/18 13:26:47 by fmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	cadena[200] = "poner, esta 43frase con todas-las-palabras; primera letra+en+mayuscula. Excepto precedido por un numero.";
	
	printf("Cadena original .: %s \n", cadena);
	printf("Se envia a la función ft_strcapitaliza para poner las primeras letras de cada palabra en mayuscula \n");
	printf("Resultado.: %s \n", ft_strcapitalize(cadena));
	return (0);
}

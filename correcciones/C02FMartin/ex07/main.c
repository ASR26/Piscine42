/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartin- <fmartin-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:47:09 by fmartin-          #+#    #+#             */
/*   Updated: 2022/02/18 09:42:16 by fmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	cadena[100] = "estoy Poniendo cada LetRa de esta frase en Mayuscula.";
	
	printf("Cadena original .: %s \n", cadena);
	printf("Se envia a la función ft_strupcase para poner cada letra en mayusculas \n");
	printf("Resultado.: %s \n", ft_strupcase(cadena));
	return (0);
}

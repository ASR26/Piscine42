/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartin- <fmartin-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:47:09 by fmartin-          #+#    #+#             */
/*   Updated: 2022/02/18 10:31:26 by fmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	cadena[100] = "    .     /    aA( f F F)";
	
	printf("Cadena original .: %s \n", cadena);
	printf("Se envia a la función ft_strupcase para poner cada letra en minuscula \n");
	printf("Resultado.: %s \n", ft_strlowcase(cadena));
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blopez-j <blopez-j@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 19:48:48 by blopez-j          #+#    #+#             */
/*   Updated: 2022/02/28 16:31:16 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	contador;

	contador = 0;
	while (str[contador] != '\0')
		contador++;
	return (contador);
}

int	main(void)
{
	int		nc;
	char	*str;

	str = "Hola";
	nc = ft_strlen(str);
	printf("%d", nc);
	return (0);
}

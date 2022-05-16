/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 13:10:40 by asolano-          #+#    #+#             */
/*   Updated: 2022/02/18 10:00:06 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str)
	{
		counter++;
		str++;
	}
	return (counter);
}
/*
 int main(void)
{
	int lenght;
	char *pointer="HOLA 42";

	lenght = ft_strlen(pointer);
	printf("El valor de la cadena es : %d", lenght);
	return(0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 11:31:47 by asolano-          #+#    #+#             */
/*   Updated: 2022/02/28 11:41:37 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	while (*(src + i))
		i++;
	dest = (char *) malloc(sizeof (char) * i + 1);
	if (!dest)
		return (0);
	i = 0;
	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
/*
int main(void)
{
	char a[] = "hola que tal como estas 123456789";
	char *destino;

	destino = ft_strdup(a);
	printf("%s", destino);
	return (0);
}*/

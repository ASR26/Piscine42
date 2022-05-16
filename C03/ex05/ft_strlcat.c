/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 11:14:47 by asolano-          #+#    #+#             */
/*   Updated: 2022/02/23 09:09:52 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	j;
	unsigned int	i;

	i = 0;
	j = 0;
	while (*(dest + i))
	{
		i++;
	}
	while (*(src + j) && j < size)
	{
		*(dest + i + j) = *(src + j);
		j++;
	}
	*(dest + i + j) = '\0';
	return (i + j);
}
/*
int main()
{
	unsigned int nb = 4;
	char *a = "Hola asd42";
	char *b = "Holb 42";
	printf("%d", ft_strlcat(a, b, nb));
}*/

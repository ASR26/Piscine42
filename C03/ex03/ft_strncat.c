/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 09:04:18 by asolano-          #+#    #+#             */
/*   Updated: 2022/02/22 09:02:57 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	j;
	int				i;

	i = 0;
	j = 0;
	while (*(dest + i))
	{
		i++;
	}
	while (*(src + j) && j < nb)
	{
		*(dest + i + j) = *(src + j);
		j++;
	}
	*(dest + i + j) = '\0';
	return (dest);
}
/*
int main()
{
	unsigned int nb = 3;
	char *a = "Hola asd42";
	char *b = "Holb 42";
	printf("%s", ft_strncat(a, b, nb));
}*/

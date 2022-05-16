/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaneda- <jcaneda-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 10:19:59 by jcaneda-          #+#    #+#             */
/*   Updated: 2022/02/28 12:06:02 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	cont;
	unsigned int	len;

	cont = 0;
	len = 0;
	if (size > 0)
	{
		while ((src[cont] != '\0') && (cont < size))
		{
			dest[cont] = src[cont];
			cont++;
		}
		dest[cont] = '\0';
	}
	while (src[len] != '\0')
		len++;
	return (len);
}

int	main(void)
{
	char	src[] = "Hola que tal?";
	char	dest[] = "Como estas tu?";

	printf("len src %d : dest %s\n", ft_strlcpy(dest, src, 14), dest );
	printf("len src %lu : dest %s\n", strlcpy(dest, src, 14), dest );
	return (0);
}


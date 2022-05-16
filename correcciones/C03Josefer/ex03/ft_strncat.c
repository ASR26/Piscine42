/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-fer <jose-fer@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 11:43:26 by jose-fer          #+#    #+#             */
/*   Updated: 2022/02/28 12:49:29 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	cont1;
	unsigned int	cont2;

	cont1 = 0;
	while (dest[cont1] != '\0')
	{
		cont1++;
	}
	cont2 = 0;
	while (src[cont2] != '\0' && cont2 < nb)
	{
		dest[cont1 + cont2] = src[cont2];
		cont2++;
	}
	dest[cont1 + cont2] = '\0';
	return (dest);
}

int	main(void)
{
	char	st1[] = "Jose Manuel";
	char	st2[] = " Fernández Vegas";
	int	number = 11;

	printf("%s\n", ft_strncat(st1, st2, number));
	printf("%s\n", strncat(st1, st2, number));
	return (0);
}

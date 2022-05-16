/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-fer <jose-fer@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 10:56:44 by jose-fer          #+#    #+#             */
/*   Updated: 2022/02/27 11:45:36 by jose-fer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>*/

char	*ft_strcat(char *dest, char *src)
{
	int	cont1;
	int	cont2;

	cont1 = 0;
	cont2 = 0;
	while (dest[cont1] != '\0')
	{
		cont1++;
	}
	while (src[cont2] != '\0')
	{
		dest[cont1 + cont2] = src[cont2];
		cont2++;
	}
	dest[cont1 + cont2] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	st1[] = "Jose Manuel";
	char	st2[] = " Fernández Vegas";

	printf("%s\n", ft_strcat(st1, st2));
	printf("%s\n", strcat(st1, st2));
	return (0);
}*/

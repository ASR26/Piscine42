/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 11:12:59 by asolano-          #+#    #+#             */
/*   Updated: 2022/02/18 10:07:28 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int		i;
	char	*start;

	i = 0;
	start = dest;
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (start);
}
/*
int main (void)
{
	char dest[]= "";
	char src[] = "mundsdhsdf";
	printf("%s", ft_strcpy(dest,src));
}*/

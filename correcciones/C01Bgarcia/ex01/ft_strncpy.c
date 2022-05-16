/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgarcia- <bgarcia-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 19:43:50 by bgarcia-          #+#    #+#             */
/*   Updated: 2022/03/02 12:17:33 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
	dest[i] = src[i];
	i++;
	}
	while (i < n)
	{	
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
#include <stdio.h>

int main(void)
{
	char	a[] = "hellow"; 
	char	b[] = "hola";

	printf("%s", ft_strncpy(a, b, 2));
}	

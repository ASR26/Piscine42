/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-d <amunoz-d@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:48:32 by amunoz-d          #+#    #+#             */
/*   Updated: 2022/02/18 12:44:30 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int		j;
	char	*temp;

	j = 0;
	temp = dest;
	while (*src)
	{
		*dest++ = *src++;
	}
		*dest++ = *src++;
	return (dest);
}

int	main(void)
{
	char	dest[] = "hola";
	char	src[] = "Mundo";

	ft_strcpy(dest, src);
	printf("%s\n", dest);
}

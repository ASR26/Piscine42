/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-d <amunoz-d@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:48:32 by amunoz-d          #+#    #+#             */
/*   Updated: 2022/02/18 12:46:08 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	j;
	char			*temp;

	j = 0;
	temp = dest;
	while (j++ < n)
	{
		*dest++ = *src++;
	}
		*dest++ = '\0';
	return (dest);
}

int	main(void)
{
	int		n;
	char	dest[] = "hola";
	char	src[] = "Mundo";
	
	n = 3;
	ft_strncpy(dest, src, n);
	printf("%s\n", dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-d <amunoz-d@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:48:32 by amunoz-d          #+#    #+#             */
/*   Updated: 2022/02/18 10:55:27 by amunoz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	j;
	int				i;
	char			*temp;

	i = 0;
	j = 0;
	temp = src;
	while (*src)
	{
		src++;
		i++;
	}
	src = temp;
	while (j++ < size)
	{
		*dest++ = *src++;
	}
		*dest++ = '\0';
	return (i);
}
/*
int	main(void)
{
	int		n;
	char	dest[] = "hola asdasdasd";
	char	src[] = "Mundo pequeño";

	n = 5;
	printf("%d\n", ft_strlcpy(dest, src, n));
	printf("%s\n", dest);
}*/

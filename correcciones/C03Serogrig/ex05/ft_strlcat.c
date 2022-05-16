/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serodrig <serodrig@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 20:51:10 by serodrig          #+#    #+#             */
/*   Updated: 2022/02/23 12:56:01 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		if (i < size - 1)
			dest[i + j] = src[j];
		j++;
		i++;
	}
	dest[i - 1] = '\0';
	return (i);
}

#include<stdio.h>
#include<string.h>
int	main(void)
{
	char dest[] = "basement";
	char src[] = "añadidodespues";
	printf("%u\n", ft_strlcat(dest, src, 9));
	printf("%lu\n", strlcat(dest, src, 9));
	printf("%s", dest);
	return (0);
}


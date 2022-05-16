/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akent-go <akent-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 10:27:06 by akent-go          #+#    #+#             */
/*   Updated: 2022/02/20 11:24:03 by akent-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <string.h>
//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
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
/*
int	main(void)
{
	char	src[] = "Hello";
	char	dest[] = "World";
	char	dest1[] = "World1";

	printf("%s", ft_strncpy(dest,src, 3));
	printf("\n%s", strncpy(dest1,src, 3));
	printf("\n%s", ft_strncpy(dest,src, 5));
	printf("\n%s", strncpy(dest1,src, 5));
	printf("\n%s", ft_strncpy(dest,src, 7));
	printf("\n%s", strncpy(dest1,src, 7));

}
*/
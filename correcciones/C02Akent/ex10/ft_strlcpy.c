/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akent-go <akent-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:44:50 by akent-go          #+#    #+#             */
/*   Updated: 2022/02/20 19:46:15 by akent-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int unsigned		i;
	int					length;

	i = 0;
	length = 0;
	while (src[length])
	{
		length++;
	}
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (length);
}
/*
int	main(void)
{
	char	src[] = "World!";
	char	dest[] = "Hello";
	printf("%d | %s",ft_strlcpy(dest,src,6), dest);
}
*/
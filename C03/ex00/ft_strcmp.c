/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 09:41:32 by asolano-          #+#    #+#             */
/*   Updated: 2022/02/23 08:54:37 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{	
	int	i;

	i = 0;
	while (*(s1 + i) == *(s2 + i) && *(s1 + i))
	{
		i++;
	}
	return (*(s1 + i) - *(s2 + i));
}
/*
int main()
{
	char a[] = "Hola 42";
	char b[] = "Adios 42";
	printf("%d", ft_strcmp(a, b));
}*/

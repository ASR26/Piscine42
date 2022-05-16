/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-fer <jose-fer@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:20:13 by jose-fer          #+#    #+#             */
/*   Updated: 2022/02/24 16:23:48 by jose-fer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <string.h>
#include <stdio.h>*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	cont;

	cont = 0;
	while ((s1[cont] != '\0'|| s2[cont] != '\0') && (cont < n))
	{
		if (s1[cont] > s2[cont])
		{
			return (s1[cont] - s2[cont]);
		}
		else if (s1[cont] < s2[cont])
		{
			return (s1[cont] - s2[cont]);
		}
		cont++;
	}
	return (0);
}
/*
int	main(void)
{
	char	st1[] = "josmanuel";
	char	st2[] = "josemanuel";
	unsigned int	number = 4;
	printf("%d\n", ft_strncmp(st1, st2, number));
	printf("%d\n", strncmp(st1, st2, number)); 
	return (0);
}*/

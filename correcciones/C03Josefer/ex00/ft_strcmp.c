/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-fer <jose-fer@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 13:19:01 by jose-fer          #+#    #+#             */
/*   Updated: 2022/02/28 12:48:01 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	cont;

	cont = 0;
	while (s1[cont] != '\0' || s2[cont] != '\0')
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

int	main(void)
{
	char	st1[] = "josemanul";
	char	st2[] = "josemanuel";
	printf("%d\n", ft_strcmp(st1, st2));
	printf("%d\n", strcmp(st1, st2));
	return (0);
}

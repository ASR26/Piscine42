/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 10:57:17 by asolano-          #+#    #+#             */
/*   Updated: 2022/02/23 12:14:52 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (*(str + i) != '\0')
	{
		j = 0;
		while (*(str + i + j) == *(to_find + j) && *(str + i + j))
		{
			if (!(*(to_find + j + 1)))
			{
				return (str + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}
/*
int main()
{
    char *str = "palabra aleatoria hola random";
    char *src = "hola";
 
    printf("%s\n", ft_strstr(str, src));
 
    return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-g <amunoz-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:14:19 by amunoz-g          #+#    #+#             */
/*   Updated: 2022/02/22 10:58:32 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *buscar)
{
	int	i;
	int	j;

	i = 0;
	if (buscar[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && str[i + j] == buscar[j])
		{
			if (buscar[j + 1] == '\0')
			{
				return (&str[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	char	str1[] = "manolo esta entusiasmado por salir";
	char	buscar[] = "en";
	char *resultado;

	resultado = ft_strstr(str1, buscar);
	//result = *ft_strstr(str1, buscar);
	//printf("%s\n", str1);
	//printf("%s\n", buscar);
	printf("%s\n", resultado);
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-g <amunoz-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:06:42 by amunoz-g          #+#    #+#             */
/*   Updated: 2022/02/22 10:57:25 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *str1, char *str2, unsigned int rango)
{
	unsigned int	i;
	unsigned int	str1size;

	i = 0;
	str1size = 0;
	while (str1[i] != '\0')
	{
		str1size++;
		i++;
	}
	i = 0;
	while (i < rango)
	{
		str1[str1size + i] = str2[i];
		i++;
	}
	return (str1);
}

int main(void)
{
    char str1[100] = "esto es ";
    char str2[] = "42malaga";


    //strcat(str1, str2);
    //printf("%s\n", str1);
    ft_strcat(str1, str2, 5);
    printf("%s\n", str1);
}


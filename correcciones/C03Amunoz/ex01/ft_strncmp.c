/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-g <amunoz-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 20:07:28 by amunoz-g          #+#    #+#             */
/*   Updated: 2022/02/22 10:55:35 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *str1, char *str2, unsigned int rango)
{
	unsigned int	i;

	i = 0;
	while (i < rango)
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return (0);
}

int main(void)
{
    char str1[] = "holz";
    char str2[] = "holb";

    int a;
    int b;


    a = strncmp(str1, str2, 2);
    b = ft_strncmp(str1, str2, 4);

    printf("%d\n", a);
    printf("%d\n", b);
}


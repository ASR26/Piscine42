/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-g <amunoz-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 17:44:47 by amunoz-g          #+#    #+#             */
/*   Updated: 2022/02/22 10:54:24 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] != '\0')
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	char str1[] = "abc";
	char str2[] = "abz";

	int a;
	int b;


	a = strcmp(str1, str2);
	b = ft_strcmp(str1, str2);

	printf("%d\n", a);
	printf("%d\n", b);
}


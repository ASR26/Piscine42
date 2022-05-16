/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 10:43:40 by asolano-          #+#    #+#             */
/*   Updated: 2022/02/21 12:01:14 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	while (str[i] != '\0')
	{
		if (((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')) && (str[i - 1] < '0'
				|| (str[i - 1] > '9' && str[i - 1] < 'A')
				|| (str[i - 1] > 'Z' && str[i - 1] < 'a')
				|| str[i - 1] > 'z'))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
					str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
		i++;
	}
	return (str);
}
/*
int main()
{
	char a[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un ";
	printf("%s", a);
	printf("%c", '\n');
	ft_strcapitalize(a);
	printf("%s", a);
}*/

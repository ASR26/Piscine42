/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaneda- <jcaneda-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:40:39 by jcaneda-          #+#    #+#             */
/*   Updated: 2022/02/28 12:04:57 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	mayus(int s, char *ptr)
{
	if (s == 0)
		*ptr = *ptr - 32;
	s = s + 1;
	return (s);
}

int	minus(int s, char *ptr)
{
	if (s > 0)
		*ptr = *ptr + 32;
	s = s + 1;
	return (s);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	serie;

	i = 0;
	serie = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0') && (str[i] <= '9'))
				serie++;
		else if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			serie = mayus (serie, &str[i]);
		}
		else if ((str[i] >= 'A') && (str[i] <= 'Z'))
		{
			serie = minus (serie, &str[i]);
		}
		else
			serie = 0;
		i++;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "salut, comment tu ? 42mots quarante-deux; cinquante+et+un";

	printf("%s\n", ft_strcapitalize(str));
	return (0);
}


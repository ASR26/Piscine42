/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgarcia- <bgarcia-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:10:40 by bgarcia-          #+#    #+#             */
/*   Updated: 2022/03/01 14:10:57 by bgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
		str[i] = str[i] + 32;
		}
	i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	aux;

	str = ft_strlowcase(str);
	aux = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (aux == 1)
			{
			str[i] = str[i] -32;
			aux = 0;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
			aux = 0;
		else
		aux = 1;
		i++;
	}
	return (str);
}
/*#include <stdio.h>
int main(void)
{
char    str[] = "salut , comment tu vas ? 42mots quarante-deux;";
        printf("%s", ft_strcapitalize(str));
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akent-go <akent-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 11:13:06 by akent-go          #+#    #+#             */
/*   Updated: 2022/02/21 09:51:02 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	char_is_alphanumeric(char c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	mayus;

	i = 0;
	mayus = 1;
	while (str[i] != '\0')
	{
		if (char_is_alphanumeric(str[i]) == 1)
		{
			if ((mayus == 1) && (str[i] > 96 && str[i] < 123))
				str[i] = str[i] - 32;
			else if ((mayus == 0) && (str[i] > 64 && str[i] < 91))
				str[i] = str[i] + 32;
			mayus = 0;
		}
		else
			mayus = 1;
		i++;
	}
	return (str);
}

int	main(void)
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n",str);
	printf("%s\n",ft_strcapitalize(str));
}


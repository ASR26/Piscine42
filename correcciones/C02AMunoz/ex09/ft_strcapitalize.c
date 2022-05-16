/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-d <amunoz-d@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 15:05:05 by amunoz-d          #+#    #+#             */
/*   Updated: 2022/02/18 12:52:38 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alphanumeric(char c)
{
	if (((c >= '0') && (c <= '9'))
		|| (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z'))))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_lowercase(char c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	char	*temp;
	int		word;

	temp = str;
	word = 0;
	while (*str)
	{
		if (ft_str_is_alphanumeric(*str))
		{
			if (word == 0)
			{
				word = 1;
				if (ft_str_is_lowercase (*str))
					*str -= 32;
			}
		}
		else
		{
			word = 0;
		}
		str++;
	}
	return (temp);
}

int	main(void)
{
	char	str[] = "112hHHola,,, como estas";

	printf ("%s\n", ft_strcapitalize(str));
	return (0);
}

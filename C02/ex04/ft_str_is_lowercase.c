/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 10:44:51 by asolano-          #+#    #+#             */
/*   Updated: 2022/02/18 11:44:14 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	lowercase;
	int	i;

	i = 0;
	lowercase = 1;
	while (*(str + i))
	{		
		if ((*(str + i) > 96 && *(str + i) < 123) || *str == 0)
		{
			i++;
		}
		else
		{
			i++;
			lowercase -= 1;
		}
	}
	if (lowercase == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
int	main()
{
	char a[] = "aslkdskfh2asldkf";
		printf("%d", ft_str_is_lowercase(a));
}*/

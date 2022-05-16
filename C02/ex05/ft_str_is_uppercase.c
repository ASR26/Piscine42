/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 10:44:51 by asolano-          #+#    #+#             */
/*   Updated: 2022/02/18 13:24:51 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	uppercase;
	int	i;

	i = 0;
	uppercase = 1;
	while (*(str + i))
	{		
		if ((*(str + i) > 64 && *(str + i) < 91) || *str == 0)
		{
			i++;
		}
		else
		{
			i++;
			uppercase -= 1;
		}
	}
	if (uppercase == 1)
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
		printf("%d", ft_str_is_uppercase(a));
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 10:44:51 by asolano-          #+#    #+#             */
/*   Updated: 2022/02/18 11:11:40 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	numeric;
	int	i;

	i = 0;
	numeric = 1;
	while (*(str + i))
	{		
		if ((*(str + i) > 47 && *(str + i) < 58) || *str == 0)
		{
			i++;
		}
		else
		{
			i++;
			numeric -= 1;
		}
	}
	if (numeric == 1)
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
	char a[] = "3a48759834";
		printf("%d", ft_str_is_numeric(a));
}*/

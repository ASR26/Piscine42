/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 10:44:51 by asolano-          #+#    #+#             */
/*   Updated: 2022/02/21 08:22:53 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	printable;
	int	i;

	i = 0;
	printable = 1;
	while (*(str + i))
	{		
		if (((*(str + i) > 31 && *(str + i) < 127) || *str == 0))
		{
			i++;
		}
		else
		{
			i++;
			printable -= 1;
		}
	}
	if (printable == 1)
		return (1);
	else
		return (0);
}
/*
int	main()
{
	char a[] = "aslkdskfh2asldkf";
		printf("%d", ft_str_is_printable(a));
}*/

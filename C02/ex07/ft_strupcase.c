/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 10:44:51 by asolano-          #+#    #+#             */
/*   Updated: 2022/02/20 09:16:13 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
	{		
		if ((*(str + i) > 96 && *(str + i) < 123))
		{
			*(str + i) -= 32;
		}
		i++;
	}
	return (str);
}
/*
int	main()
{
	char a[] = "aslkdskfh2asldkf";
		printf("%s", ft_strupcase(a));
}*/

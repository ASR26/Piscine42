/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 10:44:51 by asolano-          #+#    #+#             */
/*   Updated: 2022/02/20 09:16:37 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
	{		
		if ((*(str + i) > 64 && *(str + i) < 91))
		{
			*(str + i) += 32;
		}
		i++;
	}
	return (str);
}
/*
int	main()
{
	char a[] = "JKSDFHKSDFH";
		printf("%s", ft_strlowcase(a));
}*/

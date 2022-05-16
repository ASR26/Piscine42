/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 10:44:51 by asolano-          #+#    #+#             */
/*   Updated: 2022/02/21 08:20:25 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int		alpha;
	int		i;	

	i = 0;
	alpha = 1;
	while (*(str + i))
	{	
		if ((*(str + i) > 64 && *(str + i) < 91)
			|| (*(str + i) > 96 && *(str + i) < 123) || *str == 0)
			i++;
		else
		{
			i++;
			alpha -= 1;
		}
	}
	if (alpha == 1)
		return (1);
	else
		return (0);
}
/*
int	main()
{
	char a[] = "aslkdskfhasldkf";
		printf("%d", ft_str_is_alpha(a));
}*/

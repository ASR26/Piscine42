/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akent-go <akent-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 09:05:07 by akent-go          #+#    #+#             */
/*   Updated: 2022/02/20 19:51:06 by akent-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	char_is_alphabetic(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
	{
		return (0);
	}	
}

int	ft_str_is_alpha(char *str)
{
	int		i;
	int		sol;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (char_is_alphabetic(str[i]) == 1)
		{
			sol = 1;
			i++;
		}
		else
		{
			sol = 0;
			break ;
		}
	}
	return (sol);
}
/*
int	main(void)
{
	char	str[] = "A?b";
	printf("%d", ft_str_is_alpha(str));
}
*/
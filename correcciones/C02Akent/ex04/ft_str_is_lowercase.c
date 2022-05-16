/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akent-go <akent-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 10:02:26 by akent-go          #+#    #+#             */
/*   Updated: 2022/02/20 12:39:26 by akent-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	sol;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
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
	char	str[] = "a";
	printf("%d",ft_str_is_lowercase(str));
}
*/
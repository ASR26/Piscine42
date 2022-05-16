/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-d <amunoz-d@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:48:32 by amunoz-d          #+#    #+#             */
/*   Updated: 2022/02/17 10:37:53 by amunoz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if ((*str < '0') || (*str > '9'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	int		n;
	char	src[] = "1234";

	n = ft_str_is_numeric(src);
	printf("%d\n", n);
}*/

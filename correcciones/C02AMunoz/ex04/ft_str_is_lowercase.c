/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-d <amunoz-d@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:48:32 by amunoz-d          #+#    #+#             */
/*   Updated: 2022/02/17 11:59:51 by amunoz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if ((*str < 'a') || (*str > 'z'))
			return (0);
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	int		n;
	char	src[] = "mudo";

	n = ft_str_is_lowercase(src);
	printf("%d\n", n);
}*/

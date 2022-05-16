/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-d <amunoz-d@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:48:32 by amunoz-d          #+#    #+#             */
/*   Updated: 2022/02/17 10:03:11 by amunoz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (((*str < 'a') || (*str > 'z')) && ((*str < 'A') || (*str > 'Z')))
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
	char	src[] = "Mundo";

	n = ft_str_is_alpha(src);
	printf("%d\n", n);
}*/

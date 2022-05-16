/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-d <amunoz-d@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:48:32 by amunoz-d          #+#    #+#             */
/*   Updated: 2022/02/17 12:05:32 by amunoz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if ((*str < 'A') || (*str > 'Z'))
			return (0);
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	int		n;
	char	src1[] = "MUNDO";
	char	src2[] = "sdfbc";
	char	src3[] = "Msdf _UNDO";
	char	src4[] = "";

	//n = ft_str_is_uppercase(src);
	printf("%s::: %d\n", src1, ft_str_is_uppercase(src1));
	printf("%s::: %d\n", src2, ft_str_is_uppercase(src2));
	printf("%s::: %d\n", src3, ft_str_is_uppercase(src3));
	printf("%s::: %d\n", src4, ft_str_is_uppercase(src4));
}*/

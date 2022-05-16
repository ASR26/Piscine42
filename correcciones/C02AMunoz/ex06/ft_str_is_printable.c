/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-d <amunoz-d@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:48:32 by amunoz-d          #+#    #+#             */
/*   Updated: 2022/02/17 12:34:08 by amunoz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str < 32)
			return (0);
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	char	src1[] = "MUNDO";
	char	src2[] = "sdfbc";
	src2[3] = 8;
	char	src3[] = "Msdf _UNDO";
	char	src4[] = "";

	printf("%s::: %d\n", src1, ft_str_is_printable(src1));
	printf("%s::: %d\n", src2, ft_str_is_printable(src2));
	printf("%s::: %d\n", src3, ft_str_is_printable(src3));
	printf("%s::: %d\n", src4, ft_str_is_printable(src4));
}*/

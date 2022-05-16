/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-d <amunoz-d@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:48:32 by amunoz-d          #+#    #+#             */
/*   Updated: 2022/02/17 13:12:11 by amunoz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
char	*ft_strlowcase(char *str)
{
	char	*temp;

	temp = str;
	while (*str)
	{
		if ((*str >= 'A') && (*str <= 'Z'))
			*str += 32;
		str++;
	}
	return (temp);
}
/*
int	main(void)
{
	char	src[] = "MUNDO";
	char	src2[] = "mundo";
	char	src3[] = "MUN123asdda";
	
	printf("%s\n", ft_strlowcase(src));
	printf("%s\n", ft_strlowcase(src2));
	printf("%s\n", ft_strlowcase(src3));
}*/

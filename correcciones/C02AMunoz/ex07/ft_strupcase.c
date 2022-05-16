/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-d <amunoz-d@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:48:32 by amunoz-d          #+#    #+#             */
/*   Updated: 2022/02/17 13:12:35 by amunoz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
char	*ft_strupcase(char *str)
{
	char	*temp;

	temp = str;
	while (*str)
	{
		if ((*str >= 'a') && (*str <= 'z'))
			*str -= 32;
		str++;
	}
	return (temp);
}
/*
int	main(void)
{
	char	src[] = "mundo";
	
	printf("%s\n", ft_strupcase(src));
}*/

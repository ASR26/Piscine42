/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgarcia- <bgarcia-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 11:11:04 by bgarcia-          #+#    #+#             */
/*   Updated: 2022/03/02 12:19:44 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
			i++;
		else
			return (0);
	}
	return (1);
}
#include <stdio.h>

int main(void)
{
	char	str[] = "oplkjhgfdsazxcvbnmtQWERTYUIOPLKJHGFDSAZXCVBNM";
	printf("%d", ft_str_is_alpha(str));
}

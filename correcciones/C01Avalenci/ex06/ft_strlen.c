/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avalenci <avalenci@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:26:07 by avalenci          #+#    #+#             */
/*   Updated: 2022/02/19 18:42:12 by avalenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	return (c);
}
/*
int	main(void)
{
	char str[] = "love 42,from avalenci";
	int count = ft_strlen(str);
	printf("%d\n", count);
	return (0);
}
*/

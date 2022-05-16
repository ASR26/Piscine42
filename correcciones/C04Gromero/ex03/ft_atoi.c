/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 10:52:40 by gromero-          #+#    #+#             */
/*   Updated: 2022/02/23 10:58:01 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	acum;
	int	num;
	int	negativo;

	num = 0;
	acum = 0;
	negativo = 0;
	while (str[acum] && (str[acum] == ' ' || str[acum] == '-'
			|| str[acum] == '+' || str[acum] == '\t'
			|| str [acum] == '\n' || str[acum] == '\v'
			|| str[acum] == '\f' || str[acum] == '\r'
			|| (str[acum] >= '0' && str[acum] <= '9')))
	{
		if (str[acum] == '-')
			negativo++;
		if (str[acum] >= '0' && str[acum] <= '9')
			num = num * 10 + (str[acum] - 48);
		acum++;
	}
	if (negativo % 2 == 0)
		return (num);
	else
		return (num * -1);
}
#include <stdio.h>
int main(void)
{
	char x[] = "+++++++-12-4ki1";
	int num;
	
	num = ft_atoi(x);
	printf("%d", num);
}

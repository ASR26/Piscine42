/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 11:38:39 by asolano-          #+#    #+#             */
/*   Updated: 2022/02/28 13:30:14 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_init(char *str, int *pointer_i)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while (*(str + i) && ((*(str + i) >= 9 && *(str + i) <= 13)
			|| *(str + i) == 32))
			i++;
	while (*(str + i) == 43 || *(str + i) == 45)
	{
		if (*(str + i) == 45)
			sign *= -1;
		i++;
	}
	*pointer_i = i;
	return (sign);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	result = 0;
	sign = ft_init(str, &i);
	while (*(str + i) && *(str + i) >= '0' && *(str + i) <= '9')
	{
		result = result * 10 + *(str + i) - '0';
		i++;
	}
	result *= sign;
	return (result);
}
/*
int main(void)
{
	char a[] = " ---+98391-1";

	printf("%d\n", atoi(a));
	printf("%d", ft_atoi(a));
}*/

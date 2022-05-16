/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaenes- <jjaenes-student.42malaga.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 11:34:37 by jjaenes-          #+#    #+#             */
/*   Updated: 2022/03/02 10:50:53 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	count;
	int	negative;
	int	number;

	count = 0;
	negative = 0;
	number = 0;
	while ((str[count] != '\0') && (str[count] < 48 || str[count] > 57))
	{
		if (str[count] == '-')
		negative++;
		count++;
	}
	while (str[count] >= 48 && str[count] <= 57)
	{
	number = number * 10 + str[count] - 48;
	count++;
	}
	if (negative % 2 == 1)
		return (number * -1);
	return (number);
}

int	main(int argc, char **argv)
{
	char	*str;
	str = "A VER -si me en cuentras---- el 5825";
	printf("%d \n", ft_atoi(str));
	return (0);
}

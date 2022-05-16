/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 09:18:39 by asolano-          #+#    #+#             */
/*   Updated: 2022/02/28 09:04:16 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <libc.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	base;
	int	j;
	int	s;

	s = 0;
	sign = 1;
	base = 0;
	j = 0;
	while (str[j])
	{
		if (str[j] == ' ' || str[j] == '+')
			j++;
		else if ((str[j] == '-') && (s == 0))
		{
			sign *= -1;
			j++;
		}
		else if (str[j] >= '0' && str[j] <= '9')
		{
			s = 1;
			base = 10 * base + (str[j] - '0');
		}
		else
			return (base * sign);
		j++;
	}
	return (base * sign);
}


int	main()
{
	char	str[] = "  -128-4tf837jsdjfdb6"; 
	int	val;
	
	val = ft_atoi(str);
	printf("%d", val);
	printf("%d", atoi(str));
	return (0);
}

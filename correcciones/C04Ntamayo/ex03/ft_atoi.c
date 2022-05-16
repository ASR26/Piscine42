/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntamayo- <ntamayo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:34:25 by ntamayo-          #+#    #+#             */
/*   Updated: 2022/02/22 10:25:08 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	minus_num;
	int	final_val;

	minus_num = 0;
	final_val = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32 || *str == 43 || *str == 45
		|| (*str > 47 && *str < 58))
	{
		if (*str == 45)
			minus_num++;
		if (*str > 47 && *str < 58)
		{
			final_val *= 10;
			final_val += (*str - '0');
		}
		str++;
	}
	if (minus_num % 2 == 1)
		final_val *= -1;
	return (final_val);
}

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char a[] = "  \t\n\v\f\r--+-+++-+42acwca1846";

	printf("%d\n", atoi(a));
	printf("%d", ft_atoi(a));
}

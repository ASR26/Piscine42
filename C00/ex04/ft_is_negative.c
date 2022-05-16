/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 14:15:45 by asolano-          #+#    #+#             */
/*   Updated: 2022/02/17 11:07:59 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	sign;

	if (n < 0)
	{
		sign = 'N';
		write(1, &sign, 1);
	}
	else
	{
		sign = 'P';
		write(1, &sign, 1);
	}
}
/*
int main(void)
{	
	ft_is_negative(123);
	ft_is_negative(0);
	ft_is_negative(-200);
	return(0);
}
*/

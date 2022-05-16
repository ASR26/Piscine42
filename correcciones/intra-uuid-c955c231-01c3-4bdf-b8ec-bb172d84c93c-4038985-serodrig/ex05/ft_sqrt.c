/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serodrig <serodrig@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:18:33 by serodrig          #+#    #+#             */
/*   Updated: 2022/03/03 12:04:33 by serodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	n;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	n = 0;
	while (n <= nb / 2 && n <= 46341)
	{
		if (n * n == nb)
			return (n);
		n++;
	}
	return (0);
}
/*
#include<stdio.h>
int	main(void)
{
	printf("%d", ft_sqrt(0));
	printf("\n");	
	printf("%d", ft_sqrt(9));
	printf("\n");	
	return (0);
}
*/

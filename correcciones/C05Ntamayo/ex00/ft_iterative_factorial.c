/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntamayo- <ntamayo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 11:54:04 by ntamayo-          #+#    #+#             */
/*   Updated: 2022/02/24 13:05:40 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (nb)
		i *= nb--;
	return (i);
}

#include <stdio.h>
int main(void)
{
	printf("%d", ft_iterative_factorial(-1));
	printf("%d", ft_iterative_factorial(0));
	printf("%d", ft_iterative_factorial(4));
}

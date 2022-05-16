/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntamayo- <ntamayo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:02:28 by ntamayo-          #+#    #+#             */
/*   Updated: 2022/02/21 12:25:17 by ntamayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb > 0)
		nb *= ft_recursive_factorial(nb - 1);
	else if (nb == 0)
		return (1);
	else
		return (0);
	return (nb);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d", ft_recursive_factorial(-1));
	printf("%d", ft_recursive_factorial(0));
	printf("%d", ft_recursive_factorial(4));
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntamayo- <ntamayo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 09:22:33 by ntamayo-          #+#    #+#             */
/*   Updated: 2022/02/24 13:09:36 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	rev;

	rev = 1;
	if (nb <= 0)
		return (0);
	while (rev <= 46340 && rev * rev != nb)
		rev++;
	if (rev != 46341)
		return (rev);
	return (0);
}

#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_sqrt(-2));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(2));
	printf("%d\n", ft_sqrt(4));
	printf("%d\n", ft_sqrt(2147395600));
}

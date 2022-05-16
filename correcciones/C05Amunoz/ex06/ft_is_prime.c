/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-d <amunoz-d@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 11:47:23 by amunoz-d          #+#    #+#             */
/*   Updated: 2022/02/26 13:06:00 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	cont;

	cont = 6;
	if ((nb == 0) || (nb == 1))
		return (0);
	if ((nb == 2) || (nb == 3))
		return (1);
	if ((nb % 2 == 0) || (nb % 3 == 0))
		return (0);
	while (cont <= nb / 2)
	{
		if ((nb % (cont - 1) == 0) || (nb % (cont + 1) == 0))
			return (0);
		cont += 6;
	}
	return (1);
}

int	main(void)
{
	int	i;

	i = 0;
	while (i < 21)
	{
		printf("%d\n", i);
		printf("%d\n", ft_is_prime(i));
		printf("%c\n", ' ');
		i++;
	}
	return (0);
}

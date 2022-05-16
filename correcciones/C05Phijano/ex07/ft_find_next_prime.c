/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phijano- <phijano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 08:36:48 by phijano-          #+#    #+#             */
/*   Updated: 2022/02/26 10:30:41 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	count;
	int	primo;

	if (nb <= 2)
		return (2);
	primo = 0;
	while (primo == 0)
	{
		count = 3;
		primo = 1;
		if (nb % 2 == 0)
			primo = 0;
		while (count < nb / 2 && primo == 1)
		{
			if (nb % count == 0)
				primo = 0;
			count = count + 2;
		}
		if (primo == 0)
			nb++;
	}
	return (nb);
}

#include <stdio.h>
int	main(void)
{
	int	number;

	number = 14;
	//number = 7;
	printf("El primo superior o igual a %d es ", number);
	number = ft_find_next_prime(number);
		printf("%d", number);
	return (0);
}


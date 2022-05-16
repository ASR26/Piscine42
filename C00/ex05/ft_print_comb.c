/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 14:57:11 by asolano-          #+#    #+#             */
/*   Updated: 2022/02/17 11:08:28 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	comb[3];

	comb[0] = '0';
	while (comb[0] <= '7')
	{
		comb[1] = comb[0] + 1;
		while (comb[1] <= '8')
		{
			comb[2] = comb[1] + 1;
			while (comb[2] <= '9')
			{
				write (1, &comb[0], 1);
				write (1, &comb[1], 1);
				write (1, &comb[2], 1);
				if (!(comb[0] == '7' && comb[1] == '8' && comb[2] == '9'))
				{
					write (1, ", ", 2);
				}
				comb[2]++;
			}
			comb[1]++;
		}
		comb[0]++;
	}
}
/*
int main(void)
{
	ft_print_comb();
	return(0);
}
*/

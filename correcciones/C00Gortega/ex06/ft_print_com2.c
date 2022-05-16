/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_com2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gortega- <gortega-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 10:05:40 by gortega-          #+#    #+#             */
/*   Updated: 2022/02/25 09:51:49 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	n2 = 0;
	while (n1 <= 98)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			ft_write((n1 / 10) + '0');
			ft_write((n1 % 10) + '0');
			write(1, " ", 1);
			ft_write((n2 / 10) + '0');
			ft_write((n2 % 10) + '0');
			if (n1 != 98 || n2 != 99)
			{
				write(1, ", ", 2);
			}
			n2++;
		}
		n1++;
	}
}

int	main(void)
{
	ft_print_comb2();
}

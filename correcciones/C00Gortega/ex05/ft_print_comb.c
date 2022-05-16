/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gortega- <gortega-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 09:36:11 by gortega-          #+#    #+#             */
/*   Updated: 2022/02/25 09:51:18 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char n0, char n1, char n2)
{
	write (1, &n0, 1);
	write (1, &n1, 1);
	write (1, &n2, 1);
	if (n0 != '7')
	{
		write (1, ", ", 2);
	}
}	

void	ft_print_comb(void)
{
	char	n0;
	char	n1;
	char	n2;

n0 = '0';
	while (n0 <= '7')
	{	
		n1 = n0 + 1;
		while (n1 <= '8')
		{	
			n2 = n1 + 1;
			while (n2 <= '9')
			{
				ft_write(n0, n1, n2);
			n2++;
			}
		n1++;
		}		
	n0++;
	}
}

int	main(void)
{
	ft_print_comb();
}

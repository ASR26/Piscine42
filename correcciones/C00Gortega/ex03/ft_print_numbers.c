/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gortega- <gortega-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 10:19:31 by gortega-          #+#    #+#             */
/*   Updated: 2022/02/25 09:48:58 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numers(void)
{
	int	num;

	num = 48;
	while (num <= 57)
	{
		write (1, &num, 1);
		num++;
	}	
}

int	main(void)
{
	ft_print_numers();
	return (0);
}	

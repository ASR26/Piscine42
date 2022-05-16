/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaneda- <jcaneda-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:52:37 by jcaneda-          #+#    #+#             */
/*   Updated: 2022/02/17 11:20:09 by jcaneda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)

{
	char	numero;

	numero = '0';
	while (numero < ':')
	{
		write(1, &numero, 1);
		numero++;
	}
}

/*int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/

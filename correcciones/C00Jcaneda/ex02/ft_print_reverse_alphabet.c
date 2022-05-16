/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaneda- <jcaneda-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:12:00 by jcaneda-          #+#    #+#             */
/*   Updated: 2022/02/17 11:11:03 by jcaneda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)

{
	char	caracter;

	caracter = 'z';
	while (caracter >= 'a')
	{
		write(1, &caracter, 1);
		caracter--;
	}
}

/*int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
*/

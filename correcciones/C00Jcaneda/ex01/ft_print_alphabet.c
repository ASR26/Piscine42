/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaneda- <jcaneda-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 12:11:27 by jcaneda-          #+#    #+#             */
/*   Updated: 2022/02/17 10:59:17 by jcaneda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)

{
	char	caracter;

	caracter = 'a';
	while (caracter < '{')
	{
		write(1, &caracter, 1);
		caracter++;
	}
}

/*int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/

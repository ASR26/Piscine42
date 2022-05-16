/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaneda- <jcaneda-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:52:37 by jcaneda-          #+#    #+#             */
/*   Updated: 2022/02/17 11:27:04 by jcaneda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)

{
	char	caracter;

	if (n < 0)
	{
		caracter = 'N';
		write(1, &caracter, 1);
	}
	else
	{
		caracter = 'P';
		write(1, &caracter, 1);
	}
}

/*int	main(void)
{
	ft_is_negative(-50);
	return (0);
}
*/

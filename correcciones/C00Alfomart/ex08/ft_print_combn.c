/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfomart <alfomart@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 08:55:16 by alfomart          #+#    #+#             */
/*   Updated: 2022/02/13 10:42:18 by alfomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char get_char(int n)
{
	return (97 + n);
}


void combn(int col, int max)
{
	ft_putchar(get_char(col));
	combn(col + 1, max);
}

void	ft_print_combn(int n)
{
	combn(0, n);
}

int	main(void)
{
	ft_print_combn(3);
}

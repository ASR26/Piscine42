/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartin- <fmartin-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:01:47 by fmartin-          #+#    #+#             */
/*   Updated: 2022/02/21 12:30:11 by fmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_hexa(char c)
{
	char	ch1;
	char	ch2;

	ft_putchar('\\');
	ch1 = c / 16;
	ch2 = c % 16;
	if (ch1 < 10)
		ft_putchar(ch1 + 48);
	else
		ft_putchar(ch1 + 87);
	if (ch2 < 10)
		ft_putchar(ch2 + 48);
	else
		ft_putchar(ch2 + 87);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (((*str > 0) && (*str < 31)) || (*str == 127))
			ft_print_hexa(*str);
		else
			ft_putchar(*str);
		str++;
	}
}

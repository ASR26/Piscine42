/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaneda- <jcaneda-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 11:02:34 by jcaneda-          #+#    #+#             */
/*   Updated: 2022/02/28 12:06:41 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_convhex(int np)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (np > 16)
	{
		ft_convhex(np / 10);
		ft_convhex(np % 10);
	}
	else
		ft_putchar(hex[np]);
}

void	ft_putstr_non_printable(char *str)
{
	int		cont;

	cont = 0;
	while (str[cont])
	{
		if (((str[cont] >= 0) && (str[cont] <= 31)) || (str[cont] == 127))
		{
			ft_putchar('\\');
			if (str[cont] < 16)
				ft_putchar('0');
			ft_convhex(str[cont]);
		}
		else
			ft_putchar(str[cont]);
		cont++;
	}
}

int	main(void)
{
	char	str[] = "Coucou\ntu vas bien ?";

	ft_putstr_non_printable(str);
	return (0);
}


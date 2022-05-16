/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akent-go <akent-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 09:18:26 by akent-go          #+#    #+#             */
/*   Updated: 2022/03/02 10:00:13 by akent-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_show_tab(struct s_stock_str *par);

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	show_strings(char *str)
{
	int	i;

	i = 0;
	while (str[i++])
		ft_putchar(str[i]);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}	

void	ft_show_tab(struct s_stock_str *par)
{
	char				*buffer_string;
	int					i;

	buffer_string = par;
	i = 0;
	while (i < sizeof(buffer_string) / sizeof(buffer_string[0]))
	{
		ft_putnbr(buffer_string[i].size);
		ft_putchar('\n');
		show_strings(buffer_string[i].str);
		ft_putchar('\n');
		show_strings(buffer_string[i].copy);
		ft_putchar('\n');
		i++;
	}
}

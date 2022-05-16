/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfomart <alfomart@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 06:35:43 by alfomart          #+#    #+#             */
/*   Updated: 2022/02/14 08:39:25 by alfomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	format_print(int i, int j)
{
	char	c1;
	char	c2;

	c1 = 48 + (i / 10);
	c2 = 48 + (i % 10);
	ft_putchar(c1);
	ft_putchar(c2);
	ft_putchar(' ');
	c1 = 48 + (j / 10);
	c2 = 48 + (j % 10);
	ft_putchar(c1);
	ft_putchar(c2);
}

void	sufix(int i, int j)
{
	if ((i == 98) && (j == 99))
	{	
		ft_putchar('\n');
	}
	else
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 100)
	{
		j = 0;
		while (j < 100)
		{
			if ((i != j) && (i < j))
			{
				format_print(i, j);
				sufix(i, j);
			}
		j++;
		}	
	i++;
	}
}

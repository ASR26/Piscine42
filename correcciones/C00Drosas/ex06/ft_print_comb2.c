/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosas-t <drosas-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 00:43:34 by drosas-t          #+#    #+#             */
/*   Updated: 2022/02/17 12:50:34 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(int a, int b, int c, int d)

{
	a += '0';
	b += '0';
	c += '0';
	d += '0';
	if (!(a == '9' && b == '8'))
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, " ", 1);
		write(1, &c, 1);
		write(1, &d, 1);
		write(1, ", ", 2);
	}
	else
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, " ", 1);
		write(1, &c, 1);
		write(1, &d, 1);
	}
}

void	ft_print_comb2(void)

{
	int	a;
	int	b;
	int	c;
	int	d;

	a = -1;
	while (++a <= 9)
	{
		b = -1;
		while (++b <= 9)
		{
				c = -1;
			while (++c <= 9)
			{
					d = 0;
				while (d <= 9)
				{			
					if ((a * 10) + b < (c * 10) + d)
						ft_putchar(a, b, c, d);
						d++;
				}									
			}
		}
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}

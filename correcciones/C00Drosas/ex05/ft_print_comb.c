/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosas-t <drosas-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 17:03:53 by drosas-t          #+#    #+#             */
/*   Updated: 2022/02/17 12:49:41 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(int a, int b, int c)
{
	if (a == '7' && b == '8' && c == '9')
	{
		write (1, &a, 1);
		write (1, &b, 1);
		write (1, &c, 1);
		write (1, "\n", 1);
	}
	else
	{
		write (1, &a, 1);
		write (1, &b, 1);
		write (1, &c, 1);
		write (1, ", ", 2);
		return ;
	}	
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
		c = '0';
			while (c <= '9')
			{
				if (a < b && b < c)
				{
					ft_putchar(a, b, c);
					c++;
				}
				else
					c++;
			}
					b++;
		}
					a++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}

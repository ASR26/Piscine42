/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaneda- <jcaneda-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:13:39 by jcaneda-          #+#    #+#             */
/*   Updated: 2022/02/17 11:32:38 by jcaneda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c, char d, char u)
{
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &u, 1);
	if (c != '7' || d != '8' || u != '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	u;
	char	d;
	char	c;

	c = '0';
	while (c <= '7')
	{
		d = c + 1;
		while (d <= '8')
		{
			u = d + 1;
			while (u <= '9')
			{	
				ft_putchar(c, d, u);
				u = u + 1;
			}
			d = d + 1;
		}
		c = c + 1;
	}
}

/*int	main(void)
{
	ft_print_comb();
	return (0);
}
*/

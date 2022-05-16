/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerodrig <yerodrig@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 13:29:08 by yerodrig          #+#    #+#             */
/*   Updated: 2022/02/12 13:40:45 by yerodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char letra);
char	pick_symbol(int cur_x, int cur_y, int x, int y);

void	rush(int x, int y)
{
	int	cur_x;
	int	cur_y;

	cur_y = 1;
	while (cur_y <= y)
	{
		cur_x = 1;
		while (cur_x <= x)
		{
			ft_putchar(pick_symbol(cur_x, cur_y, x, y));
			cur_x++;
		}
		ft_putchar('\n');
		cur_y++;
	}
}

char	pick_symbol(int cur_x, int cur_y, int x, int y)
{
	if (cur_x == 1 || cur_x == x)
	{
		if (cur_y == 1 || cur_y == y)
		{	
			return ('o');
		}
		else
		{
			return ('|');
		}
	}
	else
	{	
		if (cur_y == 1 || cur_y == y)
		{	
			return ('-');
		}
		else
		{
			return (' ');
		}
	}
}

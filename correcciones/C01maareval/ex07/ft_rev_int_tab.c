/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maareval <maareval@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:22:03 by maareval          #+#    #+#             */
/*   Updated: 2022/02/17 18:00:41 by maareval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	end;
	int	aux;

	end = size - 1;
	count = 0;
	while (count < size / 2)
	{
		aux = tab[end];
		tab[end] = tab[count];
		tab[count] = aux;
		count++;
		end--;
	}
}
/*
int main(void)
{	
	int size;
	int str;
		
	size = 5;
	str = 0;
	
	int c[] = {10, 20 ,30, 40, 50};
	ft_rev_int_tab(&c[0], size);
	while (str < size)
	{
		if (str != (size - 1))
		{
			printf("%d, ", c[str]);
		}
		else
		{	
			if (str == (size - 1))
			{	
				printf("%d\n", c[str]);
			}
		}	
		str++;
	}
	return(0);
}*/

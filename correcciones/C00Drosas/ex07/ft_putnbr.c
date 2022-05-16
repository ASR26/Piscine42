/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosas-t <drosas-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:10:35 by drosas-t          #+#    #+#             */
/*   Updated: 2022/02/16 18:11:48 by drosas-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}
void	ft_putnbr(int *nb)
{

	int *nb[10];
	ft_putchar(*nb + 0);
}
int	main(void)
{
	ft_putnbr(42);
	return(0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abermude <abermude@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 17:07:27 by abermude          #+#    #+#             */
/*   Updated: 2022/02/21 08:20:45 by abermude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char	*str)
{
	int	a;

	a = 0;
	while (*(str + a) != '\0')
	{
		write(1, (str + a), 1);
	a++;
	}
}
/*#include <stdio.h>
int	main(void)
{
	ft_putstr("Hola Mundo");
	return (0);
}*/

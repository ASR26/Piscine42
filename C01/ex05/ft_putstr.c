/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 12:11:03 by asolano-          #+#    #+#             */
/*   Updated: 2022/02/17 11:02:13 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{	
		write(1, str + i, 1);
		i += 1;
	}
}

/*
void	ft_putsr_corto(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}
*/
/*

int	main()
{
	char hola[] = {"Hola adios"};
	char *ptr;
	
	ptr = &hola[0];
	ft_putstr(ptr);
	return(0);
}*/

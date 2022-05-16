/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blopez-j <blopez-j@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 19:10:40 by blopez-j          #+#    #+#             */
/*   Updated: 2022/02/19 19:48:13 by blopez-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	indice;

	indice = 0;
	while (str[indice] != '\0')
	{
		write(1, &str[indice], 1);
		indice++;
	}
}

/*int	main(void)
{
	char	*str;

	str = "Hola mundo";
	ft_putstr(str);
	return (0);
}*/

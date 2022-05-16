/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartin- <fmartin-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:47:09 by fmartin-          #+#    #+#             */
/*   Updated: 2022/02/21 12:07:51 by fmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_putstr_non_printable(char *str);

int	main(void)
{
	char	cadena[] = "Coucou\ntu vas bien?";
	
	system ("clear");
	ft_putstr_non_printable(cadena);
	return (0);
}

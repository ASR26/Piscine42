/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sigutier <sigutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 21:11:11 by sigutier          #+#    #+#             */
/*   Updated: 2022/02/21 12:21:04 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (str[0] != '\0')
	{
		write(1, &str[0], 1);
		str++;
	}
}

int	main(void)
{
	char	str[] = "hello";
	ft_putstr(str);
	return (0);
}

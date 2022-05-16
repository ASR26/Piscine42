/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akent-go <akent-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 13:13:56 by akent-go          #+#    #+#             */
/*   Updated: 2022/03/02 10:02:35 by akent-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int		i;
	char	*str_array;

	i = 0;
	str_array = malloc(sizeof(t_stock_str) * (ac + 1));
	if (str_array == NULL)
	{
		str_array = NULL;
		return (str_array);
	}
	while (av[i++])
	{
		str_array[i].size = ft_strlen(av[i]);
		str_array[i].str = av[i];
		str_array[i].copy = ft_strcpy(str_array[i].copy, av[i]);
	}
	str_array[i].str = "0";
	return (struct_arr);
}

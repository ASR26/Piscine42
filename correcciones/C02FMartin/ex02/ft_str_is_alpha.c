/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartin- <fmartin-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 10:43:22 by fmartin-          #+#    #+#             */
/*   Updated: 2022/02/17 11:04:13 by fmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (((*str >= 'A') && (*str <= 'Z'))
			|| ((*str >= 'a') && (*str <= 'z')))
			str++;
		else
			return (0);
	}
	return (1);
}

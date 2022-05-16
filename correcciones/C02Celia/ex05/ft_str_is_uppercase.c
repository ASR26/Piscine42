/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celopez <celopez@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:35:03 by celopez           #+#    #+#             */
/*   Updated: 2022/02/17 18:38:49 by celopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	int	result;
	int	i;

	result = 1;
	i = 0;
	while (str[i] != '\0' && result)
	{
		if (str[i] < 'A' || str[i] > 'Z')
			result = 0;
		i++;
	}
	return (result);
}

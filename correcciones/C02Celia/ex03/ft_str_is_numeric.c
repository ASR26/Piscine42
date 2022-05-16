/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celopez <celopez@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:28:13 by celopez           #+#    #+#             */
/*   Updated: 2022/02/17 18:31:17 by celopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	int	result;
	int	i;

	result = 1;
	i = 0;
	while (str[i] != '\0' && result)
	{
		if (str[i] < '0' || str[i] > '9')
			result = 0;
		i++;
	}
	return (result);
}

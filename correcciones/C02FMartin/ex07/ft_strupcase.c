/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartin- <fmartin-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:16:27 by fmartin-          #+#    #+#             */
/*   Updated: 2022/02/18 09:43:42 by fmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_lc(char *c)
{
	if ((*c < 'a') || (*c > 'z'))
		return (0);
	return (1);
}

char	*ft_strupcase(char *str)
{
	char	*a;

	a = str;
	while (*a)
	{
		if (ft_char_lc(a))
		{
			*a -= 32;
		}
		a++;
	}
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartin- <fmartin-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 10:16:37 by fmartin-          #+#    #+#             */
/*   Updated: 2022/02/18 10:29:51 by fmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_uc(char *c)
{
	if ((*c < 'A') || (*c > 'Z'))
		return (0);
	return (1);
}

char	*ft_strlowcase(char *str)
{
	char	*a;

	a = str;
	while (*a)
	{
		if (ft_char_is_uc(a))
			*a += 32;
		a++;
	}
	return (str);
}

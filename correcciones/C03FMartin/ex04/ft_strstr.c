/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartin- <fmartin-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:23:30 by fmartin-          #+#    #+#             */
/*   Updated: 2022/02/23 19:39:30 by fmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ok_word(char *str, char *to_find, int i, int l)
{
	int	n;

	n = 0;
	while (n < l)
	{
		if (str[i + n] != to_find[n])
			return (0);
		n++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		l;
	int		i;

	l = 0;
	i = 0;
	while (to_find[l] != '\0')
		l++;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
			if (ok_word(str, to_find, i, l))
				return (&str[i]);
		i++;
	}
	return ("\0");
}

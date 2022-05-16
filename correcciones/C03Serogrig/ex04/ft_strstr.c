/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serodrig <serodrig@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 12:05:12 by serodrig          #+#    #+#             */
/*   Updated: 2022/02/23 12:55:09 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0')
		{
			if (str[i + j] == to_find[j])
			{
				j++;
			}
			else
				break ;
		}
		if (to_find[j] == '\0')
			return (str + i);
		i++;
	}
	return (0);
}

#include<stdio.h>
int	main(void)
{
	char	hstck[] = "hay una aguja en este pajar";
	char	ndl[] = "aguja";
	
	printf("%s", ft_strstr(hstck, ndl));
	return (0);
}


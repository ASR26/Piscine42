/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmunoz-a <fmunoz-a@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 11:28:28 by fmunoz-a          #+#    #+#             */
/*   Updated: 2022/03/02 11:04:56 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	sep_size(char *sep)
{
	int	i;

	i = 0;
	while (sep[i] != 0)
		i++;
	return (i);
}

int	ft_strlen(char **strs, int size)
{
	int	i;
	int	j;
	int	len;

	j = 0;
	len = 0;
	while (j < size)
	{
		i = 0;
		while (strs[j][i])
		{
			i++;
			len++;
		}
		j++;
	}
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		res_length;
	int		i;

	if (size)
	{
		res_length = ft_strlen(strs, size) + (sep_size(sep) * (size - 1));
		res = malloc(sizeof(char) * (res_length + 1));
		if (!res)
			return (0);
	}
	else
	{
		res = malloc(sizeof(char));
		return (res);
	}
	*res = 0;
	i = -1;
	while (++i < size)
	{
		res = ft_strcat(res, strs[i]);
		if (i + 1 != size)
			ft_strcat(res, sep);
	}
	return (ft_strcat(res, "\0"));
}

#include <stdio.h>
int main(int argc, char **argv)
{
	char sep[] = " \\ò_ó/ ";

	(void)argc;
	(void)argv;
	printf("%s", ft_strjoin(argc, argv, sep));
}


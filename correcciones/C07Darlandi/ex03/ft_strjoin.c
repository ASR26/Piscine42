/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darlandi <darlandi@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 10:40:14 by darlandi          #+#    #+#             */
/*   Updated: 2022/02/27 12:59:44 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest += i;
	return (dest);
}

int	full_lenght(int size, char **strs, int size_sep)
{
	int	i;
	int	len;
	int	e;

	i = 0;
	e = 0;
	while (i < size)
	{
		if (e == 0)
		{
			len = ft_strlen(strs[i]);
			e = 1;
		}
		else
			len = len + size_sep + ft_strlen(strs[i]);
		i++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*res;
	char	*d;
	int		len;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	len = full_lenght(size, strs, ft_strlen(sep));
	res = (char *)malloc(sizeof(char) * (len + 1));
	d = res;
	if (d == NULL)
		return (0);
	i = 0;
	while (i < size)
	{
		d = ft_strcpy(d, strs[i]);
		if (i < size - 1)
			d = ft_strcpy(d, sep);
		i++;
	}
	*d = '\0';
	return (res);
}

int main(void)
{
	char	**strs;
	char	*separator;
	char 	*result;
	int		size;

	size = 3;
	strs = (char **)malloc(sizeof(char *) * size);
	strs[0] = (char *)malloc(sizeof(char) * 4 + 1);
	strs[1] = (char *)malloc(sizeof(char) * 5 + 1);
	strs[2] = (char *)malloc(sizeof(char) * 14 + 1);
	strs[0] = "Hola";
	strs[1] = "amigo";
	strs[2] = "que tal estas?";
	separator = " ";
	result = ft_strjoin(size, strs, separator);
	printf("%s \n", result);
	return (0);
}

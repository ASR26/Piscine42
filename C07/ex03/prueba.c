/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 16:03:01 by asolano-          #+#    #+#             */
/*   Updated: 2022/02/28 16:35:08 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src, char *sep);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	char *string;

	i = 0;
	*string = '\0';
	if (size == 0)
		return (string);
	while ( i < size)
	{
		string = ft_strcpy(strs[i], strs[i + 1], sep);
		i++;
	}
	return (string);
}

int	ft_strlen(char *str)
{
	while (*(str + i) != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src, char *sep)
{
	int	i;
	int	j;
	int	k;

	j = 0;
	i = 0;
	k = 0;
	while(*(dest + i))
		i++;
	while (*(src + j))
	{
		*(dest + i + j) = *(src + j);
		j++;
	}
	while(*(sep + k))
	{
		*(dest + i + j + k) = *(sep + k)
		k++;
	}
	return (dest);
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

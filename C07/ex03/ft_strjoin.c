/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 11:58:03 by asolano-          #+#    #+#             */
/*   Updated: 2022/03/02 13:07:43 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	total_length(int size, char **str, char *sep);
char    *ft_strcat(char *dest, char *src);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*string;
	char	*string_pointer;
	int		length;
	int		i;

	if (size)
	{
		length = total_length(size, strs, sep);
		string = (char *) malloc((length + 1) * sizeof(char));
		if(!string)
			return (0);
	}
	else
		return(malloc(sizeof(char)));
	i = 0;
	*string = 0;
	string_pointer = string;
	while (i < size)
	{
		string = ft_strcat(string, strs[i]);
		if (i + 1 != size)
			ft_strcat(string, sep);
		i++;
	}
	return (ft_strcat(string, "\0"));
}

int	total_length(int size, char **str, char *sep)
{
	int	i;
	int	j;
	int	counter;
	int sep_size;

	j = 0;
	i = 0;
	counter = 0;
	sep_size = 0;
	while (i < size)
	{
		while (str[i][j])
		{
			j++;
			counter++;
		}
		i++;
	}
	i = 0;
	while (*(sep + i))
		i++;
	sep_size = i * (size - 1);
	return (counter + sep_size);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (*(dest + i))
		i++;
	while (*(src + j))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + j) = '\0';
	return (dest);
}

int main(int argc, char **argv)
{
	char sep[] = " \\ò_ó/ ";

	(void)argc;
	(void)argv;
	printf("%s", ft_strjoin(argc, argv, sep));
}

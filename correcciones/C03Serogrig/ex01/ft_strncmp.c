/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serodrig <serodrig@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 08:48:08 by serodrig          #+#    #+#             */
/*   Updated: 2022/02/23 10:50:21 by serodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
#include<stdio.h>
int	main(void)
{
	char	ar1[] = "eeR";
	char	ar2[] = "eeT";
	char	ar3[] = "eeV";

	printf("%d\n", ft_strncmp(ar1, ar2, 3));
	printf("%d\n", ft_strncmp(ar3, ar1, 4));
	printf("%d\n", ft_strncmp(ar1, ar1, 2));
	return (0);
}
*/

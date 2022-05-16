/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serodrig <serodrig@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 08:48:08 by serodrig          #+#    #+#             */
/*   Updated: 2022/02/23 12:49:00 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

#include<stdio.h>
int	main(void)
{
	char	ar1[] = "eeR";
	char	ar2[] = "eeT";
	char	ar3[] = "eeV";

	printf("%d\n", ft_strcmp(ar1, ar2));
	printf("%d\n", ft_strcmp(ar3, ar1));
	printf("%d\n", ft_strcmp(ar1, ar1));
	return (0);
}


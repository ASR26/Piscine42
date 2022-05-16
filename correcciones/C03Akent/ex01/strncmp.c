/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akent-go <akent-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 13:16:19 by akent-go          #+#    #+#             */
/*   Updated: 2022/02/21 17:28:50 by akent-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] == s2[i] && s1[i]) && i <= n)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
int	main(void)
{
	char	s1[] = "ab";
	char	s2[] = "a";

	
	printf("%d\n", ft_strncmp(s1,s2));
}
*/
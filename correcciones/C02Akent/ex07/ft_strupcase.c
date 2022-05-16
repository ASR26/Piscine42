/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akent-go <akent-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 10:41:32 by akent-go          #+#    #+#             */
/*   Updated: 2022/02/20 11:30:14 by akent-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*
int main()
{
	char	str[] = "aksjdhflakjshfdlakjsdhf";

    printf("%s",ft_strupcase(str));
    //printf("\n%s", ft_strupcase("cnbvxcboivjhxbociubyuicb"));
    //printf("\n%s", ft_strupcase("dkjfghs03298472039857OIUGOIUHODIUDOIU"));
}
*/
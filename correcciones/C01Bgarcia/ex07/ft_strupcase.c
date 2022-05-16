/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgarcia- <bgarcia-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 14:07:00 by bgarcia-          #+#    #+#             */
/*   Updated: 2022/03/01 13:41:30 by bgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{	
			str[i] = str[i] - 32;
		}	
		i++;
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char	str[] = "hola";
	printf("%s", ft_strupcase(str));
}*/

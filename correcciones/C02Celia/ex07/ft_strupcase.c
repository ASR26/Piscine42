/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celopez <celopez@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:44:51 by celopez           #+#    #+#             */
/*   Updated: 2022/02/20 12:24:52 by asolano-         ###   ########.fr       */
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
				str[i] -= 32;
		}
		i++
		}
			return (str);
	}
int	main()
{
	char a[] = "aslkdskfh2asldkf";
		printf("%s", ft_strupcase(a));
}

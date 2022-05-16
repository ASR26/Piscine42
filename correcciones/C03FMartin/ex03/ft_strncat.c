/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartin- <fmartin-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 18:52:37 by fmartin-          #+#    #+#             */
/*   Updated: 2022/02/22 11:00:06 by fmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;
	unsigned int	max;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	max = 0;
	while (src[max] != '\0')
	{
		max++;
	}
	if (nb > max)
		nb = max;
	j = 0;
	while (j < nb)
	{
		dest[i] = src [j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

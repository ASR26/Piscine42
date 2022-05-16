/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartin- <fmartin-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:59:02 by fmartin-          #+#    #+#             */
/*   Updated: 2022/02/22 13:20:39 by fmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d;
	unsigned int	s;
	unsigned int	t;
	unsigned int	r;

	d = 0;
	while (dest[d] != '\0')
		d++;
	s = 0;
	while (src[s] != '\0')
		s++;
	r = s + d;
	if (size <= d)
		return (s + size);
	t = 0;
	while (d < size)
	{	
		if (d < size - 1)
			dest[d] = src[t];
		else
			dest[d] = '\0';
		d++;
		t++;
	}
	return (r);
}

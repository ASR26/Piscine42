/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartin- <fmartin-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 13:33:17 by fmartin-          #+#    #+#             */
/*   Updated: 2022/02/22 17:20:51 by fmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	resultado;

	i = 0;
	resultado = 0;
	while (src[resultado])
		resultado++;
	if (size < 1)
		return (resultado);
	while (src && i < size -1)
	{
		*dest++ = *src++;
		i++;
	}
	*dest = '\0';
	return (resultado);
}

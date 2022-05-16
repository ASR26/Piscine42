/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburgos- <aburgos-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 19:58:33 by aburgos-          #+#    #+#             */
/*   Updated: 2022/02/23 06:38:54 by aburgos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	check(char *base, int base_len)
{
	int	i;
	int	j;
	int	rep;

	i = 0;
	rep = 0;
	if (base_len < 2)
		return (1);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base [j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	numbase;
	int	remainder;

	numbase = ft_strlen(base);
	if (check(base, numbase) == 1)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	remainder = nbr % numbase;
	nbr = nbr / numbase;
	if (nbr != 0)
		ft_putnbr_base(nbr, base);
	ft_putchar(base[remainder]);
}

int	main(void)
{
	ft_putnbr_base(123, "01");
	ft_putchar ('\n');
	ft_putnbr_base(123, "0123456789");
	ft_putchar ('\n');
	ft_putnbr_base(123, "0123A456789ABCDEF");
	ft_putchar ('\n');
}

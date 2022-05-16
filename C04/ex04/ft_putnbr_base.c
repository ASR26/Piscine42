/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 10:02:00 by asolano-          #+#    #+#             */
/*   Updated: 2022/03/01 09:01:40 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	base_counter(char *base);
int	check_base(char *base);
int	*set_nbr(int nbr, char *base);

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	int		base_length;
	int		print_num;
	char	final_num[32];

	base_length = base_counter(base);
	i = 0;
	if (check_base(base))
	{
		if (nbr < 0)
		{
			write (1, "-", 1);
			nbr *= -1;
		}
		while (nbr > 0)
		{
			print_num = base[(nbr % base_length)];
			nbr /= base_length;
			final_num[i++] = print_num;
		}
		while (i-- >= 0)
			write(1, &final_num[i], 1);
	}
}

int	base_counter(char *base)
{
	int	i;

	i = 0;
	while (*(base + i))
		i++;
	return (i);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = i + 1;
	if (*base == '\0')
		return (0);
	while (*(base + i))
	{
		while (*(base + i + j))
		{
			if (*(base + i) == (*(base + i + j)))
				return (0);
			j++;
		}
		if (*(base + i) == '-' || *(base + i) == '+')
			return (0);
		i++;
		j = i + 1;
	}
	if (i < 2)
		return (0);
	return (1);
}

int	main(void)
{
	ft_putnbr_base(-2147483648, "0123456789ABCDEF");
}

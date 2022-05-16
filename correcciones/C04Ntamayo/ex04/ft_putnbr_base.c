/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntamayo- <ntamayo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 21:14:50 by ntamayo-          #+#    #+#             */
/*   Updated: 2022/02/22 10:33:58 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j] || base[i] == '+' || base[i] == '-')
				return (0);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (0);
	return (i);
}

unsigned int	ft_negative_handler(int n)
{
	if (n < 0)
	{
		write(1, "-", 1);
		return (n * -1);
	}
	else
		return (n);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char			c[33];
	unsigned int	div;
	int				i;
	unsigned int	num;

	div = ft_check_base(base);
	i = 0;
	if (div != 0)
	{
		num = ft_negative_handler(nbr);
		if (!num)
			write(1, "0", 1);
		while (num != 0 && div > 1)
		{
			c[i++] = base[num % div];
			num /= div;
		}
		i--;
		while (i >= 0 && div > 1)
			write(1, &c[i--], 1);
	}
}


#include <stdio.h>
int	main(void)
{
	char	base[] = "0123456789ABCDEF";
	int		num = -314;

	ft_putnbr_base(num, base);
}

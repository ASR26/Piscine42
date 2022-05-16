/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntamayo- <ntamayo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 01:22:06 by ntamayo-          #+#    #+#             */
/*   Updated: 2022/02/22 10:35:13 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	minus_num;
	int	final_val;

	minus_num = 0;
	final_val = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32 || *str == 43 || *str == 45
		|| (*str > 47 && *str < 58))
	{
		if (*str == 45)
			minus_num++;
		if (*str > 47 && *str < 58)
		{
			final_val *= 10;
			final_val += (*str - '0');
		}
		str++;
	}
	if (minus_num % 2 == 1)
		final_val *= -1;
	return (final_val);
}

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
			if (base[i] == base[j] || base[i] == '+'
				|| base[i] == '-' || base[i] == ' ')
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

int	ft_atoi_base(char *str, char *base)
{
	int	n;

	n = ft_atoi(str);
	ft_putnbr_base(n, base);
	if (ft_check_base(base) == 0)
		return (0);
	return (n);
}

int	main(void)
{
	char	base[] = "poniguay";
	char	num[] = "   ---+-+-314afe24";

	ft_atoi_base(num, base);
}

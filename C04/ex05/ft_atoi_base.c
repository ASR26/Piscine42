/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 11:08:57 by asolano-          #+#    #+#             */
/*   Updated: 2022/02/28 11:24:09 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//ATOI
int ft_init(char *str, int *pointer_i)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while (*(str + i) && ((*(str + i) >= 9 && *(str + i) <= 13) || *(str + i) == 32))
			i++;
	while (*(str + i) == 43 || *(str + i) == 45)
	{
		if(*(str + i) == 45)
			sign *= -1;
		i++;
	}
	*pointer_i = i;
	return (sign);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	result = 0;
	sign = ft_init(str, &i);
	while (*(str + i) && *(str + i) >= '0' && *(str + i) <= '9')
	{
		result = result * 10 + *(str + i) - '0';
		i++;
	}
	result *= sign;
	return (result);
}
//FIN ATOI
//BASE
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
//FIN BASE

int	ft_atoi_base(char *str, char *base)
{

}
int	main(void)
{
	ft_putnbr_base(-2147483640, "0123456789ABCDEF");
}

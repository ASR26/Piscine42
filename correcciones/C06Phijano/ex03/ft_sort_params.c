/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phijano- <phijano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 12:28:04 by phijano-          #+#    #+#             */
/*   Updated: 2022/02/28 10:37:25 by phijano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	count;
	int	iguales;

	iguales = 0;
	count = 0;
	while (s1[count] != '\0' && iguales == 0)
	{
		iguales = s1[count] - s2[count];
		count++;
	}
	if (iguales == 0)
		iguales = s1[count] - s2[count];
	return (iguales);
}

void	ft_sort(int argc, char **args)
{
	int	count;
	int	update;

	update = 1;
	while (update != 0)
	{
		count = 2;
		update = 0;
		while (count < argc)
		{
			if (ft_strcmp(args[count], args[count - 1]) < 0)
			{
				ft_swap(&args[count], &args[count - 1]);
				update = 1;
			}
			count++;
		}
	}
}

void	ft_write(int argc, char **args)
{
	int	count;
	int	count_str;

	count = 1;
	while (count < argc)
	{
		count_str = 0;
		while (args[count][count_str])
		{
			write(1, &args[count][count_str], 1);
			count_str++;
		}
		write(1, "\n", 1);
		count++;
	}
}

int	main(int argc, char **args)
{
	ft_sort(argc, args);
	ft_write(argc, args);
	return (0);
}

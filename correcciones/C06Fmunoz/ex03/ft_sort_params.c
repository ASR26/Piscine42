/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmunoz-a <fmunoz-a@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:56:29 by fmunoz-a          #+#    #+#             */
/*   Updated: 2022/02/25 13:19:55 by fmunoz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	arg_sort(char **args, int argc)
{
	char	*temp;
	int		i;

	i = 1;
	while (i < argc - 1)
	{
		if (ft_strcmp(args[i], args[i + 1]) > 0)
		{
			temp = args[i];
			args[i] = args[i + 1];
			args[i + 1] = temp;
			i++;
		}
		else
			i++;
		arg_sort(args, argc - 1);
	}	
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	arg_sort(argv, argc);
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
			write(1, &argv[i][j++], 1);
		write(1, "\n", 2);
		i++;
	}
}

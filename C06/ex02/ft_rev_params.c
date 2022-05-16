/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 15:14:35 by asolano-          #+#    #+#             */
/*   Updated: 2022/02/28 08:55:11 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_params(int argc, char **argv)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (i + 1 < argc)
	{
		while (argv[argc - i - 1][j] != '\0')
		{
			write (1, &argv[argc - i - 1][j], 1);
			j++;
		}
		write (1, "\n", 1);
		j = 0;
		i++;
	}
}

int	main(int argc, char **argv)
{
	ft_rev_params(argc, argv);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnevado- <jnevado-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 12:09:14 by jnevado-          #+#    #+#             */
/*   Updated: 2022/03/02 12:09:15 by jnevado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	cnt;

	(void) argv;
	(void) argc;
	i = 0;
	j = 1;
	cnt = 0;
	while (cnt < argc)
	{
		while (argv[j])
		{	
			i = 0;
			while (argv[j][i])
			{
				write(1, &argv[j][i], 1);
				i++;
			}
			j++;
			write(1, &"\n", 2);
		}
		cnt++;
	}
	return (0);
}

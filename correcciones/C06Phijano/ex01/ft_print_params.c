/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phijano- <phijano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 12:07:09 by phijano-          #+#    #+#             */
/*   Updated: 2022/02/22 12:18:14 by phijano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **args)
{
	int	count;
	int	count2;

	count = 1;
	while (count < argc)
	{
		count2 = 0;
		while (args[count][count2])
		{
			write(1, &args[count][count2], 1);
			count2++;
		}
		write(1, "\n", 1);
		count++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phijano- <phijano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 12:20:55 by phijano-          #+#    #+#             */
/*   Updated: 2022/02/22 12:23:58 by phijano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **args)
{
	int	count;
	int	count2;

	count = argc - 1;
	while (count > 0)
	{
		count2 = 0;
		while (args[count][count2])
		{
			write(1, &args[count][count2], 1);
			count2++;
		}
		write(1, "\n", 1);
		count--;
	}
}

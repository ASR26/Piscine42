/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phijano- <phijano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 09:52:29 by phijano-          #+#    #+#             */
/*   Updated: 2022/02/22 10:01:06 by phijano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **args)
{
	argc = 0;
	while (args[0][argc])
	{
		write(1, &args[0][argc], 1);
		argc++;
	}
	write(1, "\n", 1);
}

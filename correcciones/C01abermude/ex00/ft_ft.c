/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abermude <abermude@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 08:19:28 by abermude          #+#    #+#             */
/*   Updated: 2022/02/21 08:14:52 by abermude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/*#include <stdio.h>
int	main(void)
{
	int	*p_nbr;
	int	nbr;

	p_nbr = &nbr;
	ft_ft(p_nbr);
	printf("%d\n", nbr);
	return (0);
}*/

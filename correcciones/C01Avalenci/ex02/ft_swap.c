/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avalenci <avalenci@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:55:17 by avalenci          #+#    #+#             */
/*   Updated: 2022/02/17 16:45:48 by avalenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *b;
	*b = *a;
	*a = aux;
}

/*
int main(void)
{
	int a;
	int b;
	a = 20;
	b = 10;
	printf("a vale=%d, b vale=%d\n", a, b);
	ft_swap(&a, &b);
	printf("a vale=%d, b vale=%d\n", a, b);
	return (0);
}
*/

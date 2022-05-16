/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maareval <maareval@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:44:33 by maareval          #+#    #+#             */
/*   Updated: 2022/02/17 18:02:56 by maareval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_swap(int *a, int*b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int main(void)
{
	int	a;
	int	b;

	a = 4;
	b = 8;

	printf("-a- vale: %d y -b- vale: %d\n", a, b);
	printf("Pasamos los valores por el intercambiador...\n");
	printf("---> ... <---- ... ---> ... <---\n");
	ft_swap (&a, &b);
	printf("Ahora -a- vale: %d y -b- vale: %d\n", a, b);
	printf("Gracias por usar el programa ft_swap.. Ponme un 10 :)\n");
	return(0);
}*/

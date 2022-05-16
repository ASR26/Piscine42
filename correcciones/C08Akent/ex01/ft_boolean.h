/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akent-go <akent-go@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 16:04:14 by akent-go          #+#    #+#             */
/*   Updated: 2022/03/02 09:52:17 by akent-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

typedef enum a_bool {
	false = 0,
	true = 1,
}t_bool;

# define TRUE true
# define FALSE false
# define EVEN(n) (n % 2 == 0)
# define EVEN_MSG ="I have an even number of arguments"
# define ODD_MSG = "I have an odd number or arguments"
# define SUCCESS 0

#endif

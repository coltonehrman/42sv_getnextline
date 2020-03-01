/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_digits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cehrman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 12:09:36 by cehrman           #+#    #+#             */
/*   Updated: 2020/03/01 05:51:41 by cehrman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**		Function	:	ft_count_digits
**		Parameters	:	(int)n
**		Description	:	counts number of digits in |n|
**						excluding the - or + sign of |n|
**		Return		:	(int)
*/

int		ft_count_digits(int n)
{
	if (n < 0)
	{
		return ((n == MININT) ?
			ft_count_digits((n + 1) * -1) :
			ft_count_digits(n * -1));
	}
	if (n <= 9)
		return (1);
	return (1 + ft_count_digits(n / 10));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_overflow.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cehrman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 19:41:31 by cehrman           #+#    #+#             */
/*   Updated: 2020/03/01 11:31:53 by cehrman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**		Function	:	ft_int_overflow
**		Parameters	:	(int)n1, (char)op, (int)n2
**		Description	:	checks for an (int) overflow when doing
**						a math operation specified by |n1| |op| |n2|
**						where |op| can be either '+' or '*'
**		Return		:	(int)
**						-1 if overflow happens else 0
*/

int		ft_int_overflow(int n1, char op, int n2)
{
	int	res;

	if (op == '+')
		res = n1 + n2;
	else if (op == '*')
		res = n1 * n2;
	else
		return (0);
	if (n1 > 0 && n2 > 0 && res < 0)
		return (-1);
	else if (n1 < 0 && n2 < 0 && res > 0)
		return (-1);
	return (0);
}

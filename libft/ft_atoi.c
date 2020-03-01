/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cehrman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 14:12:24 by cehrman           #+#    #+#             */
/*   Updated: 2020/03/01 05:51:00 by cehrman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**		Function	:	ft_atoi
**		Parameters	:	(const char *)str
**		Description	:	converts initial portion of
**						|*str| to (int) representation
**
**						does not account for any int overflows
**						during conversion
**		Return		:	converted (int) representation
**
**		Examples of Usage:
**
**		Basic:
**		>> ft_atoi("42")			-> 42
**		>> ft_atoi("-42")			-> -42
**		>> ft_atoi("+42")			-> 42
**
**		Extra Symbols:
**		>> ft_atoi("++42")			-> 0
**		>> ft_atoi("--42") 			-> 0
**
**		Mixed with ASCII characters:
**		>> ft_atoi("abc42")			-> 0
**		>> ft_atoi("42abc")			-> 42
**		>> ft_atoi("42abc42")		-> 42
**
**		Mixed with other Symbols:
**		>> ft_atoi("42.42")			-> 42
**		>> ft_atoi("4-2.42")		-> 4
**
**		Mixed with Spaces:
**		>> ft_atoi("    42    42")	-> 42
**
**		MAX & MIN Int
**		>> ft_atoi("2147483647")	-> 2147483647
**		>> ft_atoi("-2147483648")	-> -2147483648
**
**		Int Overflows
**		>> ft_atoi("2147483648")	-> -2147483648
**		>> ft_atoi("-2147483649")	-> 2147483647
**		>> ft_atoi("9999999999")	-> 1410065407
**		>> ft_atoi("-9999999999")	-> -1410065407
*/

int		ft_atoi(const char *str)
{
	int	i;
	int	neg;
	int to_add;

	i = 0;
	neg = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		neg = (*str == '-') ? -1 : 1;
		str++;
	}
	while (*str && ft_isdigit(*str))
	{
		i *= 10;
		to_add = (int)((*str) - 48);
		i += to_add;
		str++;
	}
	return (i * neg);
}

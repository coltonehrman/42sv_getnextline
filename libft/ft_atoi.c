/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cehrman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 14:12:24 by cehrman           #+#    #+#             */
/*   Updated: 2020/02/21 09:09:02 by cehrman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int	i;
	int to_add;
	int	neg;

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
		if (ft_int_overflow(i * neg, '*', 10) == -1)
			return ((neg == -1) ? 0 : -1);
		i *= 10;
		to_add = (int)((*str) - 48);
		if (ft_int_overflow(i * neg, (neg == -1) ? '-' : '+', to_add) == -1)
			return ((neg == -1) ? 0 : -1);
		i += to_add;
		str++;
	}
	return (i * neg);
}

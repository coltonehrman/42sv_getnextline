/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_till.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cehrman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 10:33:17 by cehrman           #+#    #+#             */
/*   Updated: 2020/03/01 05:51:52 by cehrman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**		Function	:	ft_count_till
**		Parameters	:	(const char *)s, (char)c
**		Description	:	counts number of characters in |*s|
**						up until it reaches the first match of |c|
**		Return		:	(int)
*/

int		ft_count_till(const char *s, char c)
{
	int	count;

	if (!s)
		return (0);
	count = 0;
	while (*s)
	{
		if (*s == c)
			break ;
		count++;
		s++;
	}
	return (count);
}

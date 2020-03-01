/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cehrman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 20:49:39 by cehrman           #+#    #+#             */
/*   Updated: 2020/03/01 09:39:29 by cehrman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**		Function	:	ft_memcmp
**		Parameters	:	(const void *)s1, (const void *)s2, (size_t)n
**		Description	:	will compare every piece of data inside
**						|*s1| and |*s2| starting from the beginning
**						for |n| number of times
**		Return		:	(int)
**						will return the difference of
**						first mismatch in |*s1| and |*s2|
**						else returns NULL
*/

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*c_s1;
	const unsigned char	*c_s2;

	c_s1 = (const unsigned char *)s1;
	c_s2 = (const unsigned char *)s2;
	while ((int)n > 0)
	{
		if (*c_s1 != *c_s2)
			return ((*c_s1) - (*c_s2));
		c_s1++;
		c_s2++;
		n--;
	}
	return (0);
}

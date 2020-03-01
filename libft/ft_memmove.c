/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cehrman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 16:18:04 by cehrman           #+#    #+#             */
/*   Updated: 2020/03/01 09:39:03 by cehrman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**		Function	:	ft_memmove
**		Parameters	:	(void *)dst, (const void *)src, (size_t)len
**		Description	:	copies data from |*src| into |*dst|
**						accordingly to account for data overlap
**
**						if |src| starts first in memory data will be
**						copied starting from the end of |len|
**						else data will be copied from the beginnning
**						until it reaches |len|
**		Return		:	(void *)
**						will return |*dst| pointer at the location
**						it first pointed to
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*c_dst;
	const char	*c_src;
	size_t		i;

	i = 0;
	c_dst = (char *)dst;
	c_src = (const char *)src;
	if (!dst && !src)
		return (dst);
	if (c_src < c_dst)
		while (i++ < len)
			c_dst[len - i] = c_src[len - i];
	else
	{
		while (len-- > 0)
		{
			*c_dst = *c_src;
			c_dst++;
			c_src++;
		}
	}
	return (dst);
}

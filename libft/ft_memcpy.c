/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cehrman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 12:42:43 by cehrman           #+#    #+#             */
/*   Updated: 2020/03/01 09:39:18 by cehrman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**		Function	:	ft_memcpy
**		Parameters	:	(void *)dst, (const void *)src, (size_t)n
**		Description	:	copies the data from the beginning
**						of |*src| into |*dst| until
**						|n| number of copies have been made
**
**						does not care about memory overlaps
**		Return		:	(void *)
**						will return NULL if |*dst| and |*sr| are NULL
**						else will return |*dst| pointer at the location
**						it first pointed to
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)dst;
	if (!dst && !src)
		return (dst);
	while (n > 0)
	{
		*ptr = *((unsigned char *)src);
		ptr++;
		src++;
		n--;
	}
	return (dst);
}

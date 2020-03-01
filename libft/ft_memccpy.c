/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cehrman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 13:19:28 by cehrman           #+#    #+#             */
/*   Updated: 2020/03/01 09:39:55 by cehrman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**		Function	:	ft_memccpy
**		Parameters	:	(void *)dst, (const void *)src, (int)c, (size_t)n
**		Description	:	copies the data from the beginning
**						of |*src| into |*dst| until
**						either |n| number of copies have been made
**						or the data in |*dst| matches |c|
**		Return		:	(void *)
**						will return NULL if |c| was not found in
**						|*dst| else will return pointer to memory location
**						after the match of |c| in |*dst|
*/

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	match;
	unsigned char	*ptr;

	match = (unsigned char)c;
	ptr = (unsigned char *)dst;
	if (!dst && !src)
		return (dst);
	while (n > 0)
	{
		*ptr = *((unsigned char *)src);
		if (*ptr == match)
			return (ptr + 1);
		ptr++;
		src++;
		n--;
	}
	return (0);
}

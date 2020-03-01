/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cehrman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 20:57:20 by cehrman           #+#    #+#             */
/*   Updated: 2020/03/01 09:39:43 by cehrman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**		Function	:	ft_memchr
**		Parameters	:	(const void *)s, (int)c, (size_t)n
**		Description	:	finds the first data in |*s| that matches |c|
**
**						will only check for |n| times
**		Return		:	(void *)
**						will return the location of |c|
**						found in |*s| else will return NULL
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*c_s;

	c_s = (const unsigned char *)s;
	while (n > 0)
	{
		if (*c_s == (unsigned char)c)
			return ((void *)c_s);
		c_s++;
		n--;
	}
	return (0);
}

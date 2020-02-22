/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cehrman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 12:42:43 by cehrman           #+#    #+#             */
/*   Updated: 2020/02/20 17:33:24 by cehrman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*ptr;

	ptr = dst;
	if (!dst && !src)
		return (dst);
	while (n > 0)
	{
		*ptr = *((char *)src);
		ptr++;
		src++;
		n--;
	}
	return (dst);
}

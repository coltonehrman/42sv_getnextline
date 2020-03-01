/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cehrman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 06:36:14 by cehrman           #+#    #+#             */
/*   Updated: 2020/03/01 09:40:01 by cehrman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**		Function	:	ft_memalloc
**		Parameters	:	(size_t)size
**		Description	:	creates new memory allocation with |size|
**						and bzeros out the data inside
**		Return		:	(void *)
*/

void	*ft_memalloc(size_t size)
{
	void	*mem;

	mem = malloc(size);
	if (!mem)
		return (0);
	ft_bzero(mem, size);
	return (mem);
}

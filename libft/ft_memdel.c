/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cehrman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 07:51:33 by cehrman           #+#    #+#             */
/*   Updated: 2020/03/01 09:39:09 by cehrman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**		Function	:	ft_memdel
**		Parameters	:	(void **)ap
**		Description	:	frees the memory that was pointed to by
**						|**ap| then sets |*ap| to NULL
**		Return		:	(void)
*/

void	ft_memdel(void **ap)
{
	void *mem;

	if (ap)
	{
		mem = *ap;
		if (mem)
		{
			free(mem);
			*ap = 0;
		}
	}
}
